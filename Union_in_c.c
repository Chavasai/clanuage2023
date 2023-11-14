#include<stdio.h>

union team
{
	int rank;
	float average;
	
};
int main()
{
	union team t;
	printf("Enter the rank of the team:");
	scanf("\n%d",&t.rank);
	printf("rank is : %d",t.rank);
	printf("\nEnter the average of the team:");
	scanf("\n%f",&t.average);
	printf("average is : %f",t.average);
	
	printf("\nthe size of the team is :%d",sizeof(t));
}
