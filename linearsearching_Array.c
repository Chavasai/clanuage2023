// linear searching in c language
#include<stdio.h>
int linearSearch(int arr[],int size,int element)
{
   for(int i=0;i<size;i++)
   {
   	if(arr[i]==element)
   	{ 
   	return i;
	   }
   }
   return -1;
}

int main()
{
	int arr[]={10,30,20,50,40,60,70};
	int size = sizeof(arr)/sizeof(int);
	int element = 60;
	int SearchIndex=linearSearch(arr,size,element);
	printf("the element %d was found at index %d \n",element,SearchIndex);
	return 0;
}
