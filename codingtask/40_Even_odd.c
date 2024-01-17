#include<stdio.h>
#include "main.h"
void evenodd()
{
	int num;
	printf("Enter the value of check whether it is even or odd");
	scanf("%d",&num);
	if(num%2==0)
	{
		printf("The given number is even");
	}
	else
	{
		printf("The given number is odd");
	}
}
