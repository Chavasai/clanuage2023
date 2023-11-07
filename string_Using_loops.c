//write a program to print string characters by using loops

#include<stdio.h>
int main()
{
	char name[50];
	printf("Enter the name of student:");
	gets(name);
	
	puts("Name of student is:");
	
	for(int i=0;i<sizeof(name);i++)
	{
	   printf("\n%c",name[i]);	
	}
}
