//PROGRAM TO  FIND ODD OCCURING NUMBER OF TIMES.
// COMPLEXITY IS N*N

#include<stdio.h>
void OddOccuring(int array[99],int x)
{
	int result=0;
	for(int i=0;i<x;i++)
	{
		 result=result^array[i];
	}
	printf("Odd Number= %d\n",result);
	
}

int main()
{
	int array[99];
	int i,x;
	printf("Enter the size of array\n");
	scanf("%d",&x);
	printf("\nEnter the element of array\n");
		for(i=0;i<x;i++)
		{	
		scanf("%d",&array[i]);
		}
	OddOccuring(array,x);
}
