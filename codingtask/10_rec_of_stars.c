#include<stdio.h>
#include "main.h"
void starpattern()
{
	int n=0, i;
        while(n<5)
        {
            for(i=1; i<=10; i++)
            {
                printf("*");
            }
            printf("\n");
            n=n+1;
        }

}
