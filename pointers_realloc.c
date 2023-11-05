#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,n,i;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	p=(int*)calloc(n,sizeof(int));
	
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
	
	int m;
	printf("Enter the new number of elements:");
	scanf("%d",&m);
    p=(int*)realloc(p,m*sizeof(int));
    
    printf("\nEnter the %d of elements :",m);
	for(i=n;i<m;i++)
	{
		scanf("\n%d",&*(p+i));
    }
    
    printf("\n the %d elements are:",m);
    for(i=0;i<m;i++)
    {
    	printf("\n%d",*(p+i));
	}
	
    
              
	
}
