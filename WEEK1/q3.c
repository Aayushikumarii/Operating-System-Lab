#include<stdio.h>
#include<stdlib.h>
#include<errno.h>

int main(){
	int a = 10;
	float b = 9.50;
	char c = 'A';
	char str[] = "Aayushi Kumari";
	printf("a = %d, b = %f, c = %c, str = %s",a,b,c,str
		);
	printf("Hexadecimal for a = %x\n", a);
	errno = EPERM;
	printf("Error Access Number : %m\n");
}