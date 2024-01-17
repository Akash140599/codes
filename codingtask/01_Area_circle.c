#include <stdio.h>
#include "main.h"
void area()
{
    float area, r, pi=3.1415;
    printf("Enter the Radius of the circle: ");
    scanf("%f",&r);
    area=pi*r*r;
    printf("Area of the Circle is : %f", area);
}
