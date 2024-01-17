#include <stdio.h>
#include "main.h"
#include <string.h>
void dectohex() {
    long long decimal;
    char hex[20];
    int i = 0, j;

    /* Get decimal value from user */
    printf("Enter decimal number: ");
    scanf("%lld", &decimal);

    // Check for negative decimal input
    if (decimal < 0) {
        printf("Invalid input: Please enter a non-negative decimal number.\n");
          // Exit with an error code
    }

    // Convert decimal to hexadecimal
    while (decimal > 0) {
        int remainder = decimal % 16;

        if (remainder < 10) {
            hex[i++] = remainder + '0';
        } else {
            hex[i++] = remainder - 10 + 'A';
        }

        decimal /= 16;
    }

    // Reverse the hex string
    for (j = 0; j < i / 2; j++) {
        char temp = hex[j];
        hex[j] = hex[i - j - 1];
        hex[i - j - 1] = temp;
    }

    hex[i] = '\0';  // Null-terminate the hex string

    printf("\nDecimal number = %lld\n", decimal);
    printf("Hexadecimal number = %s\n", hex);

    
}


	
