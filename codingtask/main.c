#include <stdio.h>
#include <stdlib.h>
#include "main.h"
int main() {
    int option;

    printf("Options:\n");
    printf("  1: Perform to find area of Circle\n");
    printf("  2: Perform to find perimeter of circle\n");

    printf("Enter your option: ");
    scanf("%d", &option);

    switch (option) {

        case 1:
            area();
            break;

        case 2:
            pericircle();
            break;
            
        case 3:
	    rectanglearea();
	    break;

	case 4:
	    naturalornot();
	    break;

	case 5:
	    addtwonumber();
	    break;

	case 6:
	    factorial();
	    break;

	case 7:
	    bignumber();
	    break;

	case 8:
	    realnumber();
	    break;

	case 9:
	    greatnumber();
	    break;

	case 10:
	    starpattern();
	    break;

	case 11:
	    pattern1();
	    break;

	case 12:
	    pattern2();
	    break;

	case 13:
	    pattern3();
	    break;

	case 14:
	    pattern4();
	    break;

	case 15:
	    pattern5();
	    break;

	case 16:
	    pattern6();
	    break;

	case 17:
	    factor();
	    break;

	case 18:
	    prime();
	    break;

	case 19:
	    reverse();
	    break;

	case 20:
	    fibonacci();
	    break;

	case 21:
	    gcd();
	    break;

	case 22:
	    shopping();
	    break;

	case 23:
	    palindrome();
	    break;

	case 24:
	    bit4BCD();
	    break;

	case 25:
	    dectohex();
	    break;

	case 26:
	    sorting();
	    break;

	case 27:
	    hextodec();
	    break;

	case 28:
	    numbertozero();
	    break;

	case 29:
	    areaofsq();
	    break;

	case 30:
	    periofsq();
	    break;

	case 31:
	    avg();
	    break;

	case 32:
	    submark();
	    break;

	case 33:
	    resistance();
	    break;

	case 34:
	    power();
	    break;

	case 35:
	    sumcurrent();
	    break;

	case 36:
	    wheatstone();
	    break;

	case 37:
	    dl();
	    break;

	case 38:
	    grade();
	    break;

	case 39:
	    kirchoff();
	    break;

	case 40:
	    evenodd();
	    break;

	case 41:
	    ageofperson();
	    break;

	case 42:
	    naturalnumbers();
	    break;

	case 43:
	    oddnumbers();
	    break;

	case 44:
	    sixtyoddnumbers();
	    break;

	case 45:
	    eveninrange();
	    break;

	case 46:
	    evennumreverse();
	    break;

	case 47:
	    naturalrev();
	    break;

	case 48:
	    mulof5();
	    break;

	case 49:
	    mulof3();
	    break;

	case 50:
	    mul_in_range();
	    break;





	    


	     default:
            printf("Invalid option. Please choose 1 to 50\n");
            return 1;
    }

    return 0;
}
