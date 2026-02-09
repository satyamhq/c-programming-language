/*
 * Program 40: Check Prime Number
 * Description: Determines if a number is prime or not.
 *              Prime: Only divisible by 1 and itself.
 * 
 * Concepts Covered:
 * - Prime number logic
 * - Loop with break statement
 * - Flag variable
 */

#include <stdio.h>

int main() {
    int num, i;
    int isPrime = 1;  // Flag: assume prime initially
    
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    // Handle special cases
    if (num <= 1) {
        isPrime = 0;
    } else {
        // Check for divisibility from 2 to num/2
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isPrime = 0;  // Not prime
                break;        // Exit loop early
            }
        }
    }
    
    if (isPrime) {
        printf("%d is a PRIME number.\n", num);
    } else {
        printf("%d is NOT a prime number.\n", num);
    }
    
    return 0;
}
