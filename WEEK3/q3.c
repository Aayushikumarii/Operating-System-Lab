#include<sys/types.h>
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
	pid_t pid;
	int status;
	pid = fork();
	switch(pid){
		case -1: printf("Error! Fork failed\n");
				 exit(0);
		case 0: printf("Executing child process...\nProcess ID: %d\nParent Process ID: %d\nChild Process ID: %d\nNow, Exiting child process...\n", getpid(), getppid(), pid);
				break;
		default: wait(&status);
				 printf("Executing parent process...\nChild Status has returned: %d\nProcess ID: %d\nParent Process ID: %d\nChild Process ID: %d\nNow, Exiting parent process...\n", status, getpid(), getppid(), pid);
	}
	return 0;
}