#include<stdio.h>
int main() 
{
	int arr[5]={10,20,30,40,50};
    arr[2]=50;
    arr[1]=500;
	printf("%d\t",arr[2]);

	float cgpa[5]={8.9,9.0,10.0,7.5,7.0};
	printf("%f\t",cgpa[0]);

	char name[6]={'s','a','i','.','C','H'};
	printf("%c",name[0]);
	
	int i;
	int roll[5];
	
	for(int i=0;i<=4;i++){
		printf("\nEnter the element number %d:",i+0);// by using this line of code we can enter elements one by one 
		scanf("%d",&roll[i]);// initialising array using loop
	}
	
    for(int i=0;i<=4;i++){
		printf("\n %d",roll[i]);//printing arrays using loop from starting  index position to ending 
	
	}
	
	for(i=4;i>=0;i--)
	{
		printf("\n%d ",roll[i]);
	}
	
	

	

	
	
	
	
	return 0;
}
