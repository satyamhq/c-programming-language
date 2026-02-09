/*
 * Program 38: Sum of Even and Odd Numbers
 * Description: Calculates sum of even and odd numbers from 1 to N.
 * 
 * Concepts Covered:
 * - Combining loops and conditions
 * - Modulus operator
 * - Accumulator variables
 */

#include <stdio.h>

int main() {
    int n, i;
    int sumEven = 0, sumOdd = 0;
    int countEven = 0, countOdd = 0;
    
    printf("Enter the value of N: ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            sumEven += i;
            countEven++;
        } else {
            sumOdd += i;
            countOdd++;
        }
    }
    
    printf("\n===== Results (1 to %d) =====\n", n);
    printf("\nEven Numbers:\n");
    printf("  Count: %d\n", countEven);
    printf("  Sum: %d\n", sumEven);
    
    printf("\nOdd Numbers:\n");
    printf("  Count: %d\n", countOdd);
    printf("  Sum: %d\n", sumOdd);
    
    printf("\nTotal Sum: %d\n", sumEven + sumOdd);
    
    return 0;
}
