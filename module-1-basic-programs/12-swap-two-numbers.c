/*
 * Program 12: Swap Two Numbers Using Third Variable
 */

#include <stdio.h>

int main() {
    int a, b, temp;
    
    printf("Enter first number: ");
    scanf("%d", &a);
    
    printf("Enter second number: ");
    scanf("%d", &b);
    
    printf("\nBefore Swap: a = %d, b = %d\n", a, b);
    
    // Swapping using third variable
    temp = a;
    a = b;
    b = temp;
    
    printf("After Swap: a = %d, b = %d\n", a, b);
    
    return 0;
}
