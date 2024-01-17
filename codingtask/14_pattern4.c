#include<stdio.h>
#include "main.h"
void pattern4()
{
	int space=0,i,j,n=5;
	while(n>=1)
	{
		for(i=1; i<=space; i++)
		{
			printf(" ");
		}
		for(j=n; j>=1; j--)
		{
			printf("a");
		}
		for(j=1; j<=n; j++)
		{
			printf("b");
		}
		printf("\n");
		space++;
		n--;
	}
}
