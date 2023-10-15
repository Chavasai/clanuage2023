#include<stdio.h>
int BinarySearch(int arr[],int size,int element)
{
     int low,mid,high;
     low = 0 ;
     high = size-1;
    while(low<=high)
    {
    	mid =(low+high)/2;
    	if(arr[mid]==element)
    	{
    		return mid;
		}
		if(arr[mid]<element)
		{
			low=mid+1;
		}
		else
		{
			high=mid-1;
		}
	}
     return -1;	
}
int main()
{
	int arr[]={10,30,40,50,60,70,600};
	int size = sizeof(arr)/sizeof(int);
	int element=70;
	int searchIndex= BinarySearch(arr,size,element);
	printf("the element %d is found at index %d \n",element,searchIndex);
	return 0;
}
