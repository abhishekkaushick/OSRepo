#include<stdio.h>
Circular_array_Binary_search(int arry[],int low,int high,int search)
{ 
	int mid;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(arry[mid]==search)
		{
			printf("Element found at index=%d",mid);
		}
		if(arry[mid]<=arry[high])
		{
			if(search>arry[mid] && search<arry[high])
			{
				low=mid+1;	
			}
			else
			{
				high=mid-1;
			}
		}
		else
		{
			if(search>arry[mid] && search>arry[low])
			{
				high=mid-1;
			}
			else
			{
				low=mid+1;
			}
		}
	}
	return -1;
	
}


int main()
{
	int half,i,n,x;
	int arry[99];
	 printf("enter the size of array\n");
	scanf("%d",&n);
	printf("\n Enter the element in array\n");
	for(i=0;i<=n;i++)
	{
		scanf("%d",&arry[i]);
	}
	printf("Enter element to seach\n");	
	scanf("%d",&x);
	Circular_array_Binary_search(arry,0,n,x);
}
