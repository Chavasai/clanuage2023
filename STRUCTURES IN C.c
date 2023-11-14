#include<stdio.h>

struct student
{
   int roll_number;
   float cgpa;
   char grade;	
};
int main()
{
	struct student s1;
	scanf("%d\n",&s1.roll_number);
	scanf("%f\n",&s1.cgpa);
	scanf("%c\n",&s1.grade);
	printf("Roll number is : %d\n",s1.roll_number);
	printf("cgpa is : %f\n",s1.cgpa);
	printf("grade is: %c\n",s1.grade);
	
	struct student s2={1,8.0,'A'};
	printf("Roll number is : %d\n",s2.roll_number);
	printf("cgpa is : %f\n",s2.cgpa);
    printf("grade is: %c\n",s2.grade);
}
