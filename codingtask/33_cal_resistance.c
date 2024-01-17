#include<stdio.h>
#include "main.h"
void resistance()
{
	int r,v,i;
	printf("Enter the value for voltage and current");
	scanf("%d %d",&v,&i);
	r=v/i;
	printf("The value of Resistance is: %d Ohm",r);
}
