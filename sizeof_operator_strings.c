#include<stdio.h>
int main()
{
	char name[]="university";
	printf("size of the string is %d",sizeof(name));
	
	char name1[50];
	printf("\nEnter the name:");
	scanf("%s",name1);
	
	printf("the size of name is %d:",sizeof(name1));
	
	char name2[50];
	printf("\nEnter the name:");
	scanf("%s",name2);//here 
	
	printf("name is: %s",name2);
	
	
	
	
}
