/*
 * Program 37: Print Numbers using Do-While Loop
 * Description: Demonstrates do-while loop (executes at least once).
 * 
 * Concepts Covered:
 * - do-while loop syntax
 * - Post-condition checking
 * - Difference from while loop
 */

#include <stdio.h>

int main() {
    int n, i;
    
    printf("Enter the value of N: ");
    scanf("%d", &n);
    
    printf("\nNumbers from 1 to %d using do-while loop:\n", n);
    
    i = 1;
    do {
        printf("%d ", i);
        i++;
    } while (i <= n);
    printf("\n");
    
    // Demonstrating do-while executes at least once
    printf("\nDemonstrating do-while (N=0 case):\n");
    int count = 1;
    int limit = 0;
    
    printf("Using while (limit=0): ");
    while (count <= limit) {
        printf("%d ", count);
        count++;
    }
    printf("(Nothing printed)\n");
    
    count = 1;
    printf("Using do-while (limit=0): ");
    do {
        printf("%d ", count);
        count++;
    } while (count <= limit);
    printf("(Executes once)\n");
    
    return 0;
}
