#include <stdio.h>
#include "main.h"
void factor()
{
	int num, N,i=1,a;
	printf("Enter the number: ");
	scanf("%d", &num);
	N=num/2;
	while(i<=N)
	{
		a=num%i;
		if(a==0)
		{
			printf("%d\n",i);
		}
		i++;
	}
}
