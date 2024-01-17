#include<stdio.h>
#include "main.h"
void sumcurrent()
{
	int i1,i2,i3,i4,i5,i6,sum;
	printf("Enter the incoming current");
	scanf("%d %d %d %d",&i1,&i2,&i4,&i5,&i6);
	printf("Enter the outgoind current");
	scanf("%d %d",&i3,&i4);
	sum=i1+i2-i3+i4+i5-i6;
	printf("Sum of all Current: %d",sum);
}
