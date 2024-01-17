#include<stdio.h>
#include "main.h"
void prime()
{
	int num,i,a,count=0;
	printf("Enter the Number to check whether it is prime or not");
	scanf("%d",&num);
	for(i=1; i<=num; i++)
	{
		a=num%i;
		if(a==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		printf("It is Prime Number\n");
	}
	else
	{
		printf("It is Not Prime Number\n");
	}
}
