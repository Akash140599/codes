#include<stdio.h>
#include "main.h"
void mulof3()
{
	int num=3, i, ans;
	for(i=1; i<=10; i++)
	{
		ans=num*i;
		printf("%d x %d = %d\n",num,i,ans);
	}
}

