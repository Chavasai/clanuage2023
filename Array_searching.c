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

int loc=-1;
int ele;
printf("\nEnter the element to search: ");
scanf("%d",&ele);
for(i=0;i<n;i++)
{
if(a[i]==ele)
{
loc=i;
break;
}
}

if(loc==-1)
{
printf("Element is not present in the array.");
}
else
{
printf("Element is present at location %d",loc+1);
}

}
