#include <stdio.h>
#include "main.h"
void palindrome()
{
	int num,N,rem,rev=0;
	printf("Enter the number to check it is Palindrom: ");
	scanf("%d",&num);
	N=num;
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	if(N==rev)
	{
		printf("Given number is Palindrome\n");
	}
	else
	{
		printf("Given number is not Palindrome\n");
	}
}
