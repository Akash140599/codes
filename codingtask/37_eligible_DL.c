#include<stdio.h>
#include "main.h"
void dl()
{
	int age;
	printf("Enter the age of a person to check eligible for DL");
	scanf("%d",&age);
	if(age<18)
	{
		printf("The person is not eligible for DL\n");
	}
	else
	{
		printf("The person is eligible for DL\n");
	}
}
