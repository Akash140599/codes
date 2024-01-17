#include<stdio.h>
#include "main.h"
void bignumber()
{
	int a,b;
	printf("Enter the value for a & b");
	scanf("%d %d", &a, &b);
	if(a>b)
	{
		printf("a is Big\n");
	}
	else
	{
		printf("b is Big\n");
	}
}
