#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() {
    pid_t pid;
    pid = fork();
    switch(pid){
        case -1: printf("Error! Fork failed\n");
                 exit(1);
        case 0: printf("Executing child process...\nParent Process ID: %d\nChild Process ID: %d\n", getpid(), getppid());
                 exit(0);
        default: sleep(2);
                 printf("Executing parent process...\n" );
                 break;
    }
    system("ps");
    return 0;
}