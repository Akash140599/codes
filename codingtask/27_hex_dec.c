#include<stdio.h>
#include "main.h"
#include<string.h>
void hextodec()
{
	char hex[20];
    long long decimal = 0;
    int i = 0, length;

    /* Get hexadecimal value from user */
    printf("Enter hexadecimal number: ");
    scanf("%s", hex);

    length = strlen(hex);

    for (i = 0; i < length; i++) {
        char currentDigit = hex[i];
        int digitValue;

        if (currentDigit >= '0' && currentDigit <= '9') {
            digitValue = currentDigit - '0';
        } else if (currentDigit >= 'A' && currentDigit <= 'F') {
            digitValue = currentDigit - 'A' + 10;
        } else if (currentDigit >= 'a' && currentDigit <= 'f') {
            digitValue = currentDigit - 'a' + 10;
        } else {
            printf("Invalid hex character: %c\n", currentDigit);
              // Exit with an error code
        }

        decimal = decimal * 16 + digitValue;
    }

    printf("\nHexadecimal number = %s\n", hex);
    printf("Decimal number = %lld\n", decimal);
}
