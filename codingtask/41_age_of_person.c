#include<stdio.h>
#include "main.h"
void ageofperson()
{
	int age;
	printf("Enter the age of the Person");
	scanf("%d", &age);
	if(age<5)
	{
		printf("Child\n");
	}
	else if(age<10)
	{
		printf("Kid\n");
	}
	else if(age<15)
	{
		printf("Teen Age\n");
	}
	else if(age<25)
	{
		printf("Young Age\n");
	}
	else if(age<50)
	{
		printf("Middle Age\n");
	}
	else
	{
		printf("Old Age\n");
	}
}
