#include<stdio.h>
#include "main.h"
void sorting()
{
	int num[10],n=10,temp,i,j;
	printf("Enter the 10 random number");
	for(i=0; i<n; i++)
	{
		scanf("%d",&num[i]);
	}
	for(i=0; i<n-1; i++)
	{
		for(j=0; j<n-i-1; j++)
		{
			if(num[j]>num[j+1])
			{
				temp=num[j];
				num[j]=num[j+1];
				num[j+1]=temp;
			}
		}
	}
	printf("Number in Ascending Order is : ");
	for(i=0; i<n; i++)
	{
		printf("%d ",num[i]);
	}
}
