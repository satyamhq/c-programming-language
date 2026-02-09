/*
 * Program 47: Convert Decimal to Binary
 * Description: Converts a decimal number to its binary representation.
 * 
 * Concepts Covered:
 * - Number system conversion
 * - Array for storing remainders
 * - Reverse printing
 */

#include <stdio.h>

int main() {
    int decimal, binary[32];
    int i = 0, j;
    
    printf("Enter a decimal number: ");
    scanf("%d", &decimal);
    
    int originalDecimal = decimal;
    
    if (decimal == 0) {
        printf("\nBinary equivalent: 0\n");
        return 0;
    }
    
    // Convert to binary
    while (decimal > 0) {
        binary[i] = decimal % 2;
        decimal = decimal / 2;
        i++;
    }
    
    printf("\nDecimal: %d\n", originalDecimal);
    printf("Binary: ");
    
    // Print in reverse order
    for (j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
    
    return 0;
}
