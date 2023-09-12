#include<stdio.h>
int main()
{
	int num1,num2;
	printf("enter number 1:\n");
    printf("enter number 1:");
	scanf("%d",&num2);
	scanf("%d",&num2);
	
	switch(num1,num2){
		case 1:
		printf("sum of num1 num2 %d %d",num1+num2);
		break;
		case 2:
		printf("subtraction of num1 num2 %d %d",num1-num2);
		break;
			case 3:
		printf("multiplication of num1 num2 %d %d",num1*num2);
		break;
			case 4:
		printf("division of num1 num2 %d %d",num1/num2);
		break;
			case 5:
		printf("modulus of num1 num2 %d %d",num1%num2);
		break;
		default:
			printf("invalid entry , enter again");
		
	}
		 
	
}
