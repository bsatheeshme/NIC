#include <linux/module.h>
#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/interrupt.h>
#include <linux/hrtimer.h>
#include <linux/sched.h>
static irqreturn_t int_func(int irq, void *dev)
{
	printk("    ****    my interrupt is triggerd    **** \n");
	return IRQ_HANDLED;
}
static int __init hi(void)
{
	int ret;
	ret=request_irq(2, int_func, 0, "sap", NULL);
	if (ret==0)
		printk("my interrupt module is initialized \n");
	else
		printk("my interrupt module's initialization failed | error_code=i\n");
	return 0;
}
static void __exit bye(void)
{
	free_irq(2, NULL);
	printk("my interrupt module is distroyed \n");
}
module_init(hi);
module_exit(bye);
//MODULE_LICENSE("GPL");
////MODULE_DESCRIPTION("Module debugging with gdb.");
