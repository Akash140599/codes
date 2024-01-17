#include<stdio.h>
#include "main.h"
void factorial()
{
	int a=1,i=1,range;
	printf("Enter the Range to have factorial of number");
	scanf("%d", &range);
	while(i<=range)
	{
		a=a*i;
		i++;
	}
	printf("Factorial of %d = %d",range,a);
}
