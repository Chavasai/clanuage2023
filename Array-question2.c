/*Given an array of marks of 10 students if the marks of any student is less than 35 
than print the roll number of the students[roll number here refers to the index of marks]*/
//this is similar to 1 question but here we take the marks of stdent from user

#include<stdio.h>
int main()
{
	int marks[10];
	
	for(int i=0;i<10;i++)
	{
		printf("Enter the marks of the student %d :",i+1);
		scanf("%d\t",&marks[i]);
	}
	
	for(int i=0;i<10;i++)
	{
		if(marks[i]<35)
		{
			printf("%d\n",i);
		}
	}
}
