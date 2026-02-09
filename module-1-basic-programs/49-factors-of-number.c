/*
 * Program 49: Find Factors of a Number
 * Description: Finds and prints all factors of a given number.
 *              Factor: A number that divides evenly into another.
 * 
 * Concepts Covered:
 * - Factor finding logic
 * - Divisibility check
 * - Loop iteration
 */

#include <stdio.h>

int main() {
    int num, i;
    int factorCount = 0, factorSum = 0;
    
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    printf("\nFactors of %d: ", num);
    
    for (i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
            factorCount++;
            factorSum += i;
        }
    }
    
    printf("\n\nTotal factors: %d\n", factorCount);
    printf("Sum of factors: %d\n", factorSum);
    
    // Check if perfect number
    if (factorSum - num == num) {
        printf("\n%d is a PERFECT number!\n", num);
        printf("(Sum of proper divisors equals the number)\n");
    }
    
    return 0;
}
