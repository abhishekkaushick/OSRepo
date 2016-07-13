// find maximum sub array in array with time complexity is x*X*X or x^3

#include<stdio.h>
void Max_Sum_Subarray(int array[],int x)
{
	int i,j,sum=0,max_sum=0;
	for(i=0;i<x;i++)
	{
		//printf("%d",array[i]);
		for(j=i;j<x;j++)
		{
			sum=sum+array[j];
			if(sum>max_sum)
			{
				max_sum=sum;
			}
		}
		sum=0;
		
	}
	printf("Max_sum_sub_array= %d",max_sum);
}


int main()
{
	int array[99];
	int x,i;
	printf("Enter the size of array\n");
	scanf("%d",&x);
	printf("Please enter the size of array\n");
	for(i=0;i<x;i++)
	{
		scanf("%d",&array[i]);
	}
	Max_Sum_Subarray(array,x);
}
