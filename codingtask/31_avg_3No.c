#include<stdio.h>
#include "main.h"
void avg()
{
	int a,b,c,sum;
	printf("Enter the value for a and b and c");
	scanf("%d %d %d", &a,&b,&c);
	sum=(a+b+c)/3;
	printf("Average of 3 numbers is : %d", sum);
}
