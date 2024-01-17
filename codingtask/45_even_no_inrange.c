#include<stdio.h>
#include "main.h"
void eveninrange()
{
	int n1, n2;
	printf("Enter the number to start Even number:");
	scanf("%d",&n1);
	printf("Enter the number to end the Even number: ");
	scanf("%d",&n2);
	if(n1%2==0)
	{
		while(n1<=n2)
		{
			printf("%d ",n1);
			n1=n1+2;
		}
	}
	else
	{
		printf("Please enter the Even Number");
	}
	printf("\n");
}
