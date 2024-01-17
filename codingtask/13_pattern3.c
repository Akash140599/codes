#include<stdio.h>
#include "main.h"
void pattern3()
{
	int space=0,n=5,i,j;
	while(n>=1)
	{
		for(i=1; i<=space; i++)
		{
			printf(" ");
		}
		for(j=n; j>=1; j--)
		{
			printf("B");
		}
		printf("\n");
		space++;
		n--;
	}
}

