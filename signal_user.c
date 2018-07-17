#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <string.h>

void signal_handler(int signum)
{
    if (signum == SIGIO)
        printf("SIGIO\r\n");
    return;
}

int main()
{
    int i = 1;
    signal(SIGIO, signal_handler);
    printf("My PID is %d.\n", getpid());
    while (i);
    return 0;
}
