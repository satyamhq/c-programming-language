/*
 * Program 13: Swap Two Numbers Without Using Third Variable
 */

#include <stdio.h>

int main() {
    int a, b;
    
    printf("Enter first number: ");
    scanf("%d", &a);
    
    printf("Enter second number: ");
    scanf("%d", &b);
    
    printf("\nBefore Swap: a = %d, b = %d\n", a, b);
    
    // Swapping without using third variable
    a = a + b;
    b = a - b;
    a = a - b;
    
    printf("After Swap: a = %d, b = %d\n", a, b);
    
    return 0;
}
