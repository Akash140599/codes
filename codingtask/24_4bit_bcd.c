#include<stdio.h>
#include "main.h"
void bit4BCD()
{
	int num,a,rem,binary[5],i;
	printf("Enter the Number");
	scanf("%d",&num);
	a=num;
	for(i=0; i<=3; i++)
	{
		rem=num%2;
		binary[i]=rem;
		num=num/2;
	}
	printf("Binary of %d is : ",a);
	for(i=3; i>=0; i--)
	{
		printf("%d",binary[i]);
	}
}

//#include <stdio.h>

//int main() {
//    int num,rem,binary[5],i=0,a,j=3;
//        printf("Enter the Number");
//        scanf("%d",&num);
       
//        while(i<=3)
//        {
//                rem=num%2;
//                binary[i]=rem;
//                num=num/2;
//                i++;
//        }
//        while(j>=0)
//        {
//            printf("%d",binary[j]);
//            j--;
//        }
//}

