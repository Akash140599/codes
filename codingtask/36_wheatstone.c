#include<stdio.h>
#include "main.h"
void wheatstone()
{
	int v3, i1, r1, r2, r4;
	printf("Enter the values for v & i & r1 & r2");
	scanf("%d%d%d%d",&v3,&i1,&r1,&r2);
	r4=(v3/i1)*(r2/r1);
	printf("The value if r4 is: %d",r4);
}


