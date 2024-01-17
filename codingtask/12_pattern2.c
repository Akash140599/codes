#include<stdio.h>
#include "main.h"
void pattern2()
{
	int i,n=5;
	while(n>=1)
	{
		for(i=n; i>=1; i--)
		{
			printf("A");
		}
		printf("\n");
		n=n-1;
	}
}
