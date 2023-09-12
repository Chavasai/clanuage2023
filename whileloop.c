#include<stdio.h>
 int main()
{
	int n,i,sum=0;
	printf("enter a number");
	scanf("%d",&n);
	i=1;
	while(i<=n){
	
		sum=sum+i;
		i++;
	}
		printf("sum of n natural numbers is %d\n",sum);	

}
