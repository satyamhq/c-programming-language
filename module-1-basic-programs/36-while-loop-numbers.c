/*
 * Program 36: Print Numbers using While Loop
 * Description: Demonstrates while loop to print numbers.
 * 
 * Concepts Covered:
 * - while loop syntax
 * - Loop control variable
 * - Pre-condition checking
 */

#include <stdio.h>

int main() {
    int n, i;
    
    printf("Enter the value of N: ");
    scanf("%d", &n);
    
    printf("\nNumbers from 1 to %d using while loop:\n", n);
    
    i = 1;  // Initialization
    while (i <= n) {  // Condition
        printf("%d ", i);
        i++;  // Increment
    }
    printf("\n");
    
    // Print even numbers
    printf("\nEven numbers from 1 to %d:\n", n);
    i = 2;
    while (i <= n) {
        printf("%d ", i);
        i += 2;
    }
    printf("\n");
    
    return 0;
}
