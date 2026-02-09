/*
 * Program 24: Demonstrate Basic Arithmetic Operations
 */

#include <stdio.h>

int main() {
    int a, b;
    
    printf("Enter first number: ");
    scanf("%d", &a);
    
    printf("Enter second number: ");
    scanf("%d", &b);
    
    printf("\n--- Arithmetic Operations ---\n");
    printf("Addition: %d + %d = %d\n", a, b, a + b);
    printf("Subtraction: %d - %d = %d\n", a, b, a - b);
    printf("Multiplication: %d * %d = %d\n", a, b, a * b);
    
    if (b != 0) {
        printf("Division: %d / %d = %d\n", a, b, a / b);
        printf("Modulus: %d %% %d = %d\n", a, b, a % b);
    } else {
        printf("Division by zero is not allowed.\n");
    }
    
    return 0;
}
