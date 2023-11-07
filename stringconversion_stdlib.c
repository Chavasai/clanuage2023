#include<stdio.h>
#include<stdlib.h>// this library used for the 

int main()
{
	char num[50];
	printf("Enter the string of numbers:");
	gets(num);
	printf("%d\n",num+2);
	int i=atoi(num);
	printf("%d\n",i+2);
}
