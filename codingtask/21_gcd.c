#include<stdio.h>
#include "main.h"
void gcd()
{
	int num1,num2,a,b;
	printf("Enter the value for num1 & num2 to find GCD: ");
	scanf("%d %d",&num1,&num2);
	a=num1;
	b=num2;
	while(num1!=num2)
	{
		if(num1>num2)
		{
			num1=num1-num2;
		}
		else
		{
			num2=num2-num1;
		}
	}
	printf("GCD of %d and %d is: %d",a,b,num1);
}
	
