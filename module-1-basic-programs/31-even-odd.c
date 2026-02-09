/*
 * Program 31: Check Even or Odd Number
 * Description: Demonstrates modulus operator to check if number is even/odd.
 * 
 * Concepts Covered:
 * - Modulus operator (%)
 * - if-else statement
 * - User input validation
 */

#include <stdio.h>

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (num % 2 == 0) {
        printf("%d is an EVEN number.\n", num);
    } else {
        printf("%d is an ODD number.\n", num);
    }
    
    return 0;
}
