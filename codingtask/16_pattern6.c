#include<stdio.h>
#include "main.h"
void pattern6()
{
	int space=0, i, j, n=5;
	while(n>=1)
	{
		for(i=1; i<=space; i++)
		{
			printf(" ");
		}
		for(j=1; j<=n; j++)
		{
			printf("a");
		}
		for(j=n; j>=1; j--)
		{
			printf("b");
		}
		printf("\n");
		space++;
		n--;
	}
	int m=1, space1=4;
        while(m<=5)
        {
            for(i=space1; i>=1; i--)
            {
                printf(" ");
            }
            for(j=1; j<=m; j++)
            {
                printf("a");
            }
            for(j=1; j<=m; j++)
            {
                printf("b");
            }
            printf("\n");
            space1--;
            m++;
        }
}
