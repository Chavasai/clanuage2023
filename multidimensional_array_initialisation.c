#include<stdio.h>
int main()
{
	int a[3][4];
	int i,j;
	printf("Enter the elements");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",a[i][j]);
		}
	}
	printf("The Elements are:");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
    }
}
