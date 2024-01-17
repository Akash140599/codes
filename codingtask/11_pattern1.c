#include<stdio.h>
#include "main.h"
void pattern1()
{
	int n=0,i;
	while(n<=5)
	{
		for(i=1;i<=n;i++)
		{
			printf("A");
		}
		printf("\n");
		n=n+1;
	}
}
