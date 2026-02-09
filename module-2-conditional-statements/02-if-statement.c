/*
 * Program 02: Positive Number Check
 * Description: Check if a number is positive using simple if statement.
 *              Demonstrates the basic if conditional structure without else.
 * 
 * Concepts Covered:
 * - Simple if statement
 * - Comparison operators (>)
 * - Single condition checking
 * - Basic input/output
 */

#include <stdio.h>

int main() {
    int n;

    // Taking input from user
    printf("Enter a number: ");
    scanf("%d", &n);

    // Check if positive
    if (n > 0) {
        printf("Number is positive\n");
    }

    return 0;
}
