/*
 * Program 20: Calculate Average of Numbers
 */

#include <stdio.h>

int main() {
    int n, i;
    float num, sum = 0, average;
    
    printf("Enter the count of numbers: ");
    scanf("%d", &n);
    
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        printf("Number %d: ", i + 1);
        scanf("%f", &num);
        sum = sum + num;
    }
    
    average = sum / n;
    
    printf("Sum = %.2f\n", sum);
    printf("Average = %.2f\n", average);
    
    return 0;
}
