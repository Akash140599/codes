#include <stdio.h>
#include "main.h"

void shopping() {
    int n, i = 0, p[100], q[100], itemcount = 0, itemprice, totalbill = 0;

    printf("Enter the number of Items: ");
    scanf("%d", &n);

    while (i < n) {
        printf("Item Number: ");
        scanf("%d", &i);

        if (i > n) {
            printf("Invalid item number. Please enter a number less than or equal to %d.\n", n);
            continue;
        }

        printf("Enter the price of item no. %d: ", i);
        scanf("%d", &p[itemcount]);

        printf("Enter the Quantity of item no. %d: ", i);
        scanf("%d", &q[itemcount]);

        itemprice = p[itemcount] * q[itemcount];
        totalbill += itemprice;

        itemcount++;
    }

    // Display the shopping list and total bill
    printf("\nShopping List:\n");
    printf("-------------------------------------------------\n");
    printf("| %-20s | %-10s | %-8s |\n", "Item", "Price", "Quantity");
    printf("-------------------------------------------------\n");

    for (int a = 0; a < itemcount; a++) {
        printf("| %-20d | %-10.2d | %-8d |\n", a + 1, p[a], q[a]);
    }

    printf("-------------------------------------------------\n");
    printf("| %-20s | %-10s | %-8.2d |\n", "", "", totalbill);
    printf("-------------------------------------------------\n");

   
}

