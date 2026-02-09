/*
 * Program 39: Print Fibonacci Series
 * Description: Generates Fibonacci sequence up to N terms.
 *              Fibonacci: 0, 1, 1, 2, 3, 5, 8, 13...
 * 
 * Concepts Covered:
 * - Series generation
 * - Variable swapping
 * - Loop with multiple variables
 */

#include <stdio.h>

int main() {
    int n, i;
    int first = 0, second = 1, next;
    
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    printf("\nFibonacci Series (%d terms):\n", n);
    
    for (i = 1; i <= n; i++) {
        if (i == 1) {
            printf("%d", first);
        } else if (i == 2) {
            printf(", %d", second);
        } else {
            next = first + second;
            first = second;
            second = next;
            printf(", %d", next);
        }
    }
    printf("\n");
    
    return 0;
}
