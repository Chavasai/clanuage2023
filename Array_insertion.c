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

int no=sizeof(a)/sizeof(int);
if(no==n)
{
printf("\nNo new insertion is possible\n");
return;
}
//int loc;
//printf("\n Enter the index for deletion:");
//scanf("%d",&loc);

//for(i=loc;i<n-1;i++)
//{
//	a[i]=a[i+1];
//}

//n=n-1;
//printf("the %d elements after deleton are \n",n);


int loc,ele;
printf("\nEnter the index for insertion: ");
scanf("%d",&loc);

printf("\nEnter the element to be inserted: ");
scanf("%d",&ele);

for(i=n-1;i>=loc;i--)
{
a[i+1]=a[i];
}
a[loc]=ele;
n=n+1;

printf("The %d elements after insertion are\n",n);
for(i=0;i<n;i++)
{
printf("%d\t",a[i]);
}
}
