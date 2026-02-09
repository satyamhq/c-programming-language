/*
 * Program 33: Find Maximum of Two Numbers
 * Description: Compares two numbers and finds the larger one.
 * 
 * Concepts Covered:
 * - Comparison operators
 * - if-else statement
 * - Ternary operator (alternative method)
 */

#include <stdio.h>

int main() {
    int num1, num2, max;
    
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    // Method 1: Using if-else
    if (num1 > num2) {
        max = num1;
    } else {
        max = num2;
    }
    printf("\nUsing if-else: Maximum = %d\n", max);
    
    // Method 2: Using ternary operator
    max = (num1 > num2) ? num1 : num2;
    printf("Using ternary operator: Maximum = %d\n", max);
    
    return 0;
}
