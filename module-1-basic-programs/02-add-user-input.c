/*
 * Program 02: Addition of Two Numbers (User Input)
 * Description: Takes two numbers as input from user and displays their sum.
 *              Demonstrates scanf() function for user input.
 * 
 * Concepts Covered:
 * - Variable declaration
 * - scanf() for input
 * - printf() for output
 * - Arithmetic operations
 */

#include <stdio.h>

int main() {
    int num1, num2, sum;
    
    // Taking first number as input
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    // Taking second number as input
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    // Calculating sum
    sum = num1 + num2;
    
    // Displaying result
    printf("\n%d + %d = %d\n", num1, num2, sum);
    
    return 0;
}
