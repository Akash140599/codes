#include<stdio.h>
#include "main.h"
void naturalrev()
{
	int num;
	printf("Enter the number start natural number: ");
	scanf("%d",&num);
	while(num>=1)
	{
		printf("%d ",num);
		num--;
	}
	printf("\n");
}

