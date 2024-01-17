#include<stdio.h>
#include "main.h"
void pericircle()
{
	float perimeter, pi=3.1415, r;
	printf("Enter the radius of the circle: ");
	scanf("%f",&r);
	perimeter=2*pi*r;
	printf("Perimeter of the Circle : %f", perimeter);
}
