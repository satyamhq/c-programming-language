/*
 * Program 45: Print Prime Numbers in Range
 * Description: Prints all prime numbers between two given numbers.
 * 
 * Concepts Covered:
 * - Nested loops
 * - Range-based iteration
 * - Prime checking logic
 */

#include <stdio.h>

int main() {
    int start, end, i, j;
    int isPrime, count = 0;
    
    printf("Enter starting number: ");
    scanf("%d", &start);
    
    printf("Enter ending number: ");
    scanf("%d", &end);
    
    printf("\nPrime numbers between %d and %d:\n", start, end);
    
    for (i = start; i <= end; i++) {
        // Check if i is prime
        if (i <= 1) {
            isPrime = 0;
        } else {
            isPrime = 1;
            for (j = 2; j <= i / 2; j++) {
                if (i % j == 0) {
                    isPrime = 0;
                    break;
                }
            }
        }
        
        if (isPrime) {
            printf("%d ", i);
            count++;
        }
    }
    
    printf("\n\nTotal prime numbers found: %d\n", count);
    
    return 0;
}
