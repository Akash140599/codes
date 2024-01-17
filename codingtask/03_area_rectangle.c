#include<stdio.h>
#include "main.h"
void rectanglearea()
{
	int rectangle, l, b;
	printf("Enter the value of length and breadth: ");
	scanf("%d %d",&l,&b);
	rectangle = l*b;
	printf("Area of rectangle :- %d\n",rectangle);
}
