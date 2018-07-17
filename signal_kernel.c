#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>
#include <asm/siginfo.h>
#include <linux/rcupdate.h>
#include <linux/sched.h>
#include <linux/uaccess.h>
#include <linux/signal.h>
#include <linux/debugfs.h>
#include <linux/pid.h>

#define MAX 10

MODULE_LICENSE("GPL");

struct dentry *file;

static ssize_t write_conf_pid(struct file *file, const char *buf,
            size_t count, loff_t *position)
{
    char temp_str[MAX];
    int ret;
    int pid = 0;
    struct siginfo sinfo;
    struct task_struct *task;

    /* NEVER TRUST USER INPUT */
    if (count > MAX)
        return -EINVAL;

    if (copy_from_user(temp_str, buf, MAX) != 0)
        return -EFAULT;

    ret = sscanf(temp_str, "%d", &pid);
    if (ret != 1) {
        pr_info("Error in reading PID value from user");
        return -EINVAL;
    }

    pr_info("User entered pid %d\n", pid);
    memset(&sinfo, 0, sizeof(struct siginfo));
    sinfo.si_signo = SIGIO;
    sinfo.si_code = SI_USER;
    task = pid_task(find_vpid(pid), PIDTYPE_PID);
    if (task == NULL) {
        pr_info("Cannot find PID from user program\r\n");
        return -ENODEV;
    }
    ret = send_sig_info(SIGIO, &sinfo, task);
    if (ret < 0)
        pr_info("Error sending signal\n");
    return count;
}
static const struct file_operations my_fops = {
    .write = write_conf_pid,
};

int init_module()
{
    /* Only root can write to this file */
    file = debugfs_create_file("pidconf", 0200, NULL, NULL, &my_fops);
    return 0;
}

void cleanup_module()
{
    pr_info("\nGoodBye World\n\n");
}

