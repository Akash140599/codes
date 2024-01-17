#include<stdio.h>
#include "main.h"
void kirchoff()
{
        int i1,i2,i3,i4,i5,i6,a,b;
        printf("Enter the incoming current");
        scanf("%d %d %d %d",&i1,&i2,&i4,&i5);
        printf("Enter the outgoind current");
        scanf("%d %d",&i3,&i6);
        a=i1+i2+i4+i5;
	b=i3+i6;
	if(a==b)
	{
		printf("It is Kirchoff's Law");
	}
	else
	{
		printf("It doesn't follows the rule of Kirchoff's Law");
	}
}

