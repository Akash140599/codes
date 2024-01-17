#include<stdio.h>
#include "main.h"
void power()
{
	int power, r, i;
	printf("Enter the value for current and resistance: ");
	scanf("%d %d",&i,&r);
	power=i*i*r;
	printf("The Power value is : %d",power);
}
