#include<stdio.h>

void change(int);
int main()
{
	int a[50],n,i,j;
	printf("Enter the number of elements");
	scanf("%d",&n);
	
	printf("Enter %d elements",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter %d elements are\t");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);	
	} 
	printf("\nthe element in the array after change\n");
	for(i=0;i<n;i++)
	{
		change(a[i]);
	}
}
void change(int b)
{
	b=b*2;
	printf("%d\t",b);
}
