#include<stdio.h>
int main()
{
	int a[50][50],b[50][50];
	int i,j;
	int r,c;
	printf("enter the number of rows and matrix");
	scanf("%d",&r);
	scanf("%d",&c);
	
	printf("enter the elements  of first matrix\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("the elements of first matrix are:\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++)
		{
		printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
	printf("Enter the elements of the second matrix:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("the elements of second matrix are :\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	printf("the sum of two matrix are:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",a[i][j]+b[i][j]);
		}
		printf("\n");
	}
	
}
