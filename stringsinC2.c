#include<stdio.h>
int main()
{
	int name[5];
	printf("Enter the name elements:\n");
	scanf("%s",&name);// since we are using the function specifier as %s we do not need to use it will automatically take input of defined size
	
	printf("the neme elements are:\n");
	printf("%s",name);// since we are using the function specifier as %s we do not need to use it will automatically prints the string upto space
}
