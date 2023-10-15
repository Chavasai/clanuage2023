/*Given an array of marks of 10 students if the marks of any student is less than 35 
than print the roll number of the students[roll number here refers to the index of marks]*/

#include<stdio.h>
int main()
{
	int marks[10]={100,50,60,80,90,75,22,31,43,19};
	for(int i=0;i<=10;i++)
	{
		if(marks[i]<35)
		{
			printf("%d\t",i);
		}
	}
}


