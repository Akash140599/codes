#include<stdio.h>
#include "main.h"
void evennumreverse()
{
        int n1, n2;
        printf("Enter the number to start Even number:");
        scanf("%d",&n2);
        printf("Enter the number to end the Even number: ");
        scanf("%d",&n1);
        if(n1%2==0)
        {
                while(n2>=n1)
                {
                        printf("%d ",n2);
                        n2=n2-2;
                }
        }
        else
        {
                printf("Please enter the Even Number");
        }
        printf("\n");
}

