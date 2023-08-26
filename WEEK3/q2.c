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
		case 0: printf("Executing child process of main program.\n");
				char *args[]={"./q1",NULL};
				execv(args[0],args);
				break;
		default: wait(&status);
				 printf("Executing parent process of main program.\nChild Status has returned: %d\nNow, Exiting parent process of main program...\n", status);		 

	}
}
