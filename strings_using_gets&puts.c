#include<stdio.h>
int main()
{
	char name[]="chava sai kiran";
	printf("%d\n",sizeof(name));//sizeof operator to find the size of charecter array
	
	char name1[50];
	printf("enter the name1:");
	scanf("%s",name1);
	
	printf("Nmae is:%s",name);//in this compilier it is printing total string that user have given
	//but as per c language structure %s reads only upto space and it will print upto their only
	//so in orderto print the total string we use gets and puts functions
	
	
}
#include<stdio.h>
int main1()
{
	char name2[50];
	printf("\nEnter the name of student:\n");
	gets(name2);
	puts("\nThe name of student is :");
	puts(name2);
}
