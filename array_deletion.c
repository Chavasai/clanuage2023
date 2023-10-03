#include<stdio.h>
int main()
{
int a[5];
int n;
int i;
printf("Enter the number of elements: ");
scanf("%d",&n);

printf("Enter %d elements\n",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}

printf("The %d elements are\n",n);
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}

int loc;
printf("\nEnter the index for deletion: ");
scanf("%d",&loc);
for(i=loc;i<n-1;i++)
{
	a[i]=a[i+1];
}

//Code for element deletion
n=n-1;

printf("The %d elements after deletion are\n",n);
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
}
