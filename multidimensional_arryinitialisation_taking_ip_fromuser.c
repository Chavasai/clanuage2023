#include<stdio.h>
int main()
{
	int a[3][4];
	int i,j;
	int r,c
	printf("Enter the no of rows and coloumns");
	scanf("%d",&r);
	scanf("%d",&c);
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanaf("%d",a[i][j]);
		}
	}
	printf("The Elements are:");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
    }
}
