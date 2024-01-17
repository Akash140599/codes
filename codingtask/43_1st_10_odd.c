#include<stdio.h>
#include "main.h"
void oddnumbers()
{
	int num=10,i=1,odd=1;
	while(i<=num)
	{
		printf("%d ",odd);
		odd=odd+2;
		i++;
	}
}

