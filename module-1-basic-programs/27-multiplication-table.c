/*
 * Program 27: Print Multiplication Table
 */

#include <stdio.h>

int main() {
    int num, i;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    printf("\n===== Multiplication Table of %d =====\n\n", num);
    
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
    
    return 0;
}
