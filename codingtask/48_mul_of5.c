#include<stdio.h>
#include "main.h"
void mulof5()
{
	int num=5, i=1, ans,n;
	printf("Enter the Range to get multiplication of five");
	scanf("%d",&n);

	while(i<=n)
	{
		ans=num*i;
		printf("%d x %d = %d\n",num,i,ans);
		i=i+1;
	}
}
