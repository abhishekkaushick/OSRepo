//complexity of this program is n^2

#include<stdio.h>
#include<conio.h>
void Majority(int array[],int half)
{
	int i,j,count=0,x=0;
	for(i=0;i<5;i++)
	{
			for(j=0;j<5;j++)
			{
				  // printf("i= %d j= %d\n",array[i],array[j]);
					if(array[i]==array[j])
					{
					count++;
							
					}
						
				//	printf("count= %d\n",count);
			}
			//printf("half=%d\n",half);
			if(count>=half)
						{
							//printf("MAJORITY-ELEMENT= %d\n",array[i]);
							x=array[i];			
						}		
		count=0;
	}
	
				if(x==0)
				{
					printf("NO MAJORITY ELEMENT");
						}
				else
			{
				printf("MAJORITY ELEMENT= %d",x);
			}
}





int main()
{
	int half,i;
	int arry[5];
	// printf("enter the size of array\n");
	//scanf("%d",&n);
	printf("\n Enter the element in array\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arry[i]);
	}
	half=5/2+1;
	
	Majority(arry,half);
}
