#include<stdio.h>
#include "main.h"
void pattern5()
{
	int space=5, i, j, n=1;
	while(n<=5)
	{
		for(i=1; i<=space; i++)
		{
			printf(" ");
		}
		for(j=1; j<=n; j++)
		{
			printf("a");
		}
		for(j=1; j<=n; j++)
		{
			printf("b");
		}
		printf("\n");
		space--;
		n++;
	}
}
