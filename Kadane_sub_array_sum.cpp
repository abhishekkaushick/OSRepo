// Kadane's algorithm for maximum sum of sub array...
#include<stdio.h>
Max_sub_array(int array[],int x)
{
	int i,result=0,sum=0;
	for(i=0;i<x;i++)
	{
		if(i==0)
		{
			result=array[i];
			sum=array[i];
		}
		else
		{
			if(sum<0)
			{
				sum=0;
			//	sum=sum+array[i];
			}
			sum=sum+array[i];
			if(sum>result)
			{
				result=sum;
			}
			
		}
	}
	printf("Maximum_sum_array= %d",result);
}

int main()
{
	int array[99];
	int x,i;
	printf("Enter the size of array\n");
	scanf("%d",&x);
	printf("Enter the element in array\n");
	for(i=0;i<x;i++)
	{
		scanf("%d",&array[i]);
	}
	Max_sub_array(array,x);
	
}
