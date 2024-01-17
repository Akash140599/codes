#include<stdio.h>
#include "main.h"
void fibonacci()
{
	int num,next,i=0,first=0,second=1;
	printf("Enter the range to get fibonacci number");
	scanf("%d",&num);
	while(i<=num)
	{
		if(i<=1)
		{
			next=i;
		}
		else
		{
			next=first+second;
			first = second;
			second = next;
		}
		i++;
		printf("%d ",next);
	}
	
}

