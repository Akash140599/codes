#include<stdio.h>
#include "main.h"
void mul_in_range()
{
	int start,end,i=1,ans;
	printf("Enter the range to start the multiplication table: ");
	scanf("%d",&start);
	printf("Enter the range to end the multiplication table: ");
	scanf("%d",&end);
	if(start<end)
	{
		while(start<=end)
		{
			for(i=1; i<=10; i++)
			{
				ans=start*i;
				printf("%d x %d = %d\n",start,i,ans);
			}
			start++;
			printf("\n");

		}
	}
	else
	{
		while(start>=end)
        	{
                	for(i=1; i<=10; i++)
                	{
                        	ans=start*i;
                        	printf("%d x %d = %d\n",start,i,ans);
                	}
                	start--;
			printf("\n");
        	}
		printf("\n");
	}
}
