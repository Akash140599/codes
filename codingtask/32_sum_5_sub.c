#include<stdio.h>
#include "main.h"
void submark()
{
	int sum, a, b, c, d, e;
	printf("Enter the Marks of 5 subjects");
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	sum = a+b+c+d+e;
	printf("Sum of 5 subject Marks : %d",sum);
}

