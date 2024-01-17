#include<stdio.h>
#include "main.h"
void grade()
{
	float a,b,c,d,e,percentage;
	printf("Enter the marks of each subject");
	scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
	percentage=((a+b+c+d+e)/500)*100;
	if(percentage>80)
	{
		printf("Grade: A");
	}else if(percentage>60)
	{
		printf("Grade: B");
	}else if(percentage>40)
	{
		printf("Grade: C");
	}else if(percentage<40) 
	{
		printf("Grade: D");
	}
}
