#include<sys/types.h>
#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main(){
	pid_t pid;
	int status;
	pid = fork();
	switch(pid){
		case -1: printf("Error! Fork failed\n");
				 exit(0);
		case 0: printf("Executing child process...\n");
				break;
		default: wait(&status);
				 printf("Executing parent process.. \nWaiting for child process to complete\nChild Status has returned: %d\nNow, Exiting parent process...\n", status);		 
	}
	return 0;
}
