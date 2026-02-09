/*
 * Program 43: Find GCD (Greatest Common Divisor)
 * Description: Finds GCD of two numbers using Euclidean algorithm.
 *              GCD: Largest number that divides both numbers.
 * 
 * Concepts Covered:
 * - Euclidean algorithm
 * - Modulus operator
 * - While loop condition
 */

#include <stdio.h>

int main() {
    int num1, num2, a, b, temp;
    
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    a = num1;
    b = num2;
    
    // Euclidean Algorithm
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    
    printf("\nGCD of %d and %d = %d\n", num1, num2, a);
    
    return 0;
}
