#include<stdio.h>

 int main()//question is about to check weather the gien number is even or odd
{
	int a;
	printf("enter a number:");
	scanf("%d",&a);
	
	if(a%2==0)// this logic is tofind weather the given is even or odd
	{
		printf("a is even number.");// if it is even then this line will run if not  else conditonal control operator will run
		
	}
	else{
		printf("a is odd number");
		
	}
     return 0;
}
