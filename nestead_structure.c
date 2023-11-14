#include<stdio.h>
//nestead structure in c  
struct dob
{
    int day;
	int month;
	int year;
		
};
struct Employee
{
	int eid;
	float salary;
	struct dob d;	 	
}; 
int main()
{
	struct Employee e;
	scanf("%d",&e.eid);
	printf("the id number is : %d",e.eid);
	scanf("%f",&e.salary);
	printf("the salary is : %f",e.salary);
	scanf("%d",&e.d.day);
	scanf("%d",&e.d.month);
	scanf("%d",&e.d.year);
	printf("the day is : %d-%d-%d",e.d.day,e.d.month,e.d.year);
	
}

