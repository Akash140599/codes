#include<stdio.h>
#include "main.h"
void realnumber()
{
	int num;
	printf("Enter the Number : ");
	scanf("%d", &num);
	if(num>=0)
	{
		printf("The Number is Real Number");
	}
	else
	{
		printf("The Number is not Real Number");
	}
}
