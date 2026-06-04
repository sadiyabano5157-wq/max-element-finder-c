#include<stdio.h>
int main()
{
	int arr[5];
	
	for(int i=0;i<5;i++)
	{
		printf("array element :%d\n",i+1);
		
		scanf("%d",&arr[i]);
	}
		int maxi=arr[0];

	
	printf("array element are:\n");

	for(int i=0;i<5;i++)
	{

	    if(arr[i]>maxi)
	    {
	      maxi=arr[i];
	      
	      
		}
	}
	
	    	printf("maximum  number of %d",maxi);
	


	return 0;
} 
