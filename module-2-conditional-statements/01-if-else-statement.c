/*
 * Program 01: Even or Odd Number
 * Description: Check if a number is even or odd using if-else statement.
 *              Demonstrates the basic if-else conditional structure.
 * 
 * Concepts Covered:
 * - if-else statement
 * - Modulus operator (%)
 * - scanf() for input
 * - Conditional checking
 */

#include <stdio.h>

int main() {
    int num;

    // Taking input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Checking even or odd
    if (num % 2 == 0) {
        printf("%d is an Even number\n", num);
    } else {
        printf("%d is an Odd number\n", num);
    }

    return 0;
}
