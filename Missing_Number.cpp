#include<stdio.h>

Missing_number(int array[],int x)
{
	int total;
	int z=0;
	total=(x)*(x+1)/2;
	printf("Total=%d\n",total);
	int sum=0;
	for(int i=1;i<=x;i++)
	{
		sum=sum+array[i];
	}
	printf("%d\n",sum);
	z=total-sum;
	printf("Missing_number=%d",z);
}


int main()
{
	int array[99];
	int x,i;
	printf("Enter the size of array\n");
	scanf("%d",&x);
	printf("Enter the element in array\n");
	for(i=1;i<=x;i++)
	{
		scanf("%d",&array[i]);
	}
	Missing_number(array,x);
}
