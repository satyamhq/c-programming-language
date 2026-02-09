/*
 * Program 48: Convert Binary to Decimal
 * Description: Converts a binary number to its decimal representation.
 * 
 * Concepts Covered:
 * - Number system conversion
 * - Power calculation
 * - Position-based value
 */

#include <stdio.h>
#include <math.h>

int main() {
    long long binary;
    int decimal = 0, position = 0, remainder;
    
    printf("Enter a binary number: ");
    scanf("%lld", &binary);
    
    long long originalBinary = binary;
    
    // Convert binary to decimal
    while (binary != 0) {
        remainder = binary % 10;
        decimal += remainder * (int)pow(2, position);
        binary = binary / 10;
        position++;
    }
    
    printf("\nBinary: %lld\n", originalBinary);
    printf("Decimal: %d\n", decimal);
    
    return 0;
}
