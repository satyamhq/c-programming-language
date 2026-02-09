/*
 * Program 28: Print First N Natural Numbers
 */

#include <stdio.h>

int main() {
    int n, i, sum = 0;
    
    printf("Enter the value of N: ");
    scanf("%d", &n);
    
    printf("\nFirst %d Natural Numbers:\n", n);
    
    for (i = 1; i <= n; i++) {
        printf("%d ", i);
        sum = sum + i;
    }
    
    printf("\n\nSum of first %d natural numbers = %d\n", n, sum);
    
    return 0;
}
