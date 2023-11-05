#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,n,i;
	printf("Enter the number of elements :");
	scanf("%d",&n);
	p=(int*)malloc(n*sizeof(int));
	
	printf("\nEnter the %d of elements :",n);
	for(i=0;i<n;i++)
	{
		scanf("\n%d",&*(p+i));
	}
	
	printf("\nthe %d of elements values are :",n);
	for(i=0;i<n;i++)
	{
		printf("\n%d\t",*(p+i));
	}
	
	free(p);
	
	
}
