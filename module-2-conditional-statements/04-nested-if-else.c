/*
 * Program 04: Nested If-Else Statement
 * Description: Check if a number is positive, negative, or zero,
 *              and if positive, check if it's even or odd.
 *              Demonstrates nested if-else conditional structure.
 * 
 * Concepts Covered:
 * - Nested if-else statements
 * - Multiple level conditions
 * - Modulus operator (%)
 * - Comparison operators
 */

#include <stdio.h>

int main() {
    int num;

    // Taking input from user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Outer condition: Check positive, negative, or zero
    if (num > 0) {
        printf("%d is Positive\n", num);
        
        // Inner condition: Check even or odd
        if (num % 2 == 0) {
            printf("%d is also Even\n", num);
        } else {
            printf("%d is also Odd\n", num);
        }
    } else if (num < 0) {
        printf("%d is Negative\n", num);
    } else {
        printf("The number is Zero\n");
    }

    return 0;
}
