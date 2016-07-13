#include<stdio.h>
#include<math.h>
median_worst(int array1[],int array2[],int n1,int n2,int result)
{
	int array[99];
	int i=0,j=0,k=0,count=0;
	while(k!=(n1+n2))
	{
		if(i==n1 || j==n2)
		{
			if(i==n1)
			{
				array[k]=array2[j];
				//printf("K = %d\n",array[k]);
				j++;
			}
			else
			{
				array[k]=array1[i];
				//printf("K = %d\n",array[k]);
				i++;
			}
		}
		else
		{
			if(array1[i]>array2[j])
			{
				array[k]=array2[j];
				//printf("K = %d\n",array[k]);
				j++;
			}
			else
			{
				array[k]=array1[i];
				//printf("K = %d\n",array[k]);
				i++;
			}
		}
		k++;
		count++;
	}
	//printf("cont=%d\n",count);
	
	if(count%2==0)
	{
		
		count=count/2;
		result=(array[count]+array[count-1])/2;
		
		printf("Median_result=%d\n",result);
	}
	else
	{
		result=(n1+n2)/2;
		printf("Median_result=%d",array[result]);
	}
	
	return result;
}

int main()
{
	int result;
	int array1[]={1, 12, 15, 26, 38};
	int array2[]={2, 13, 17, 39, 85};
	int n1=sizeof(array1)/sizeof(array1[0]);
	int n2=sizeof(array2)/sizeof(array1[0]);
	median_worst(array1,array2,n1,n2,result);
	//printf("Median of the array=%d",result);
}
