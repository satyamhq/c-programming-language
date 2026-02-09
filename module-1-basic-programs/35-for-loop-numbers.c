/*
 * Program 35: Print Numbers 1 to N using For Loop
 * Description: Demonstrates for loop to print numbers from 1 to N.
 * 
 * Concepts Covered:
 * - for loop syntax
 * - Loop counter
 * - Initialization, condition, increment
 */

#include <stdio.h>

int main() {
    int n, i;
    
    printf("Enter the value of N: ");
    scanf("%d", &n);
    
    printf("\nNumbers from 1 to %d:\n", n);
    
    for (i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n");
    
    // Print in reverse
    printf("\nNumbers from %d to 1:\n", n);
    for (i = n; i >= 1; i--) {
        printf("%d ", i);
    }
    printf("\n");
    
    return 0;
}
