/*
 * Program 32: Check Positive, Negative or Zero
 * Description: Determines if a number is positive, negative, or zero.
 * 
 * Concepts Covered:
 * - if-else-if ladder
 * - Comparison operators
 * - Number classification
 */

#include <stdio.h>

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (num > 0) {
        printf("%d is a POSITIVE number.\n", num);
    } else if (num < 0) {
        printf("%d is a NEGATIVE number.\n", num);
    } else {
        printf("The number is ZERO.\n");
    }
    
    return 0;
}
