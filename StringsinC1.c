// char in arrray is nothing but strings

#include<stdio.h>
int main()
{
	int name[5];
	int i;
	printf("Enter the 5 name elements :");
	for(i=0;i<5;i++)
	{
		scanf("%c",&name[i]);
	}		
	printf("The 5 elements are:\n");
	for(i=0;i<5;i++)
	{
		printf("%c",name[i]);
	}
	

}
