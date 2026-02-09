/*
 * Program 34: Find Maximum of Three Numbers
 * Description: Compares three numbers and finds the largest.
 * 
 * Concepts Covered:
 * - Nested if-else
 * - Logical AND operator (&&)
 * - Multiple comparisons
 */

#include <stdio.h>

int main() {
    int a, b, c, max;
    
    printf("Enter three numbers:\n");
    printf("First number: ");
    scanf("%d", &a);
    printf("Second number: ");
    scanf("%d", &b);
    printf("Third number: ");
    scanf("%d", &c);
    
    // Method: Using logical operators
    if (a >= b && a >= c) {
        max = a;
    } else if (b >= a && b >= c) {
        max = b;
    } else {
        max = c;
    }
    
    printf("\nNumbers entered: %d, %d, %d\n", a, b, c);
    printf("Maximum number: %d\n", max);
    
    return 0;
}
