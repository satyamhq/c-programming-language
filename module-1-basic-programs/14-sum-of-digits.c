/*
 * Program 14: Calculate Sum of Digits of a Number
 */

#include <stdio.h>

int main() {
    int num, sum = 0, remainder;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    int originalNum = num;
    
    while (num > 0) {
        remainder = num % 10;
        sum = sum + remainder;
        num = num / 10;
    }
    
    printf("Sum of digits of %d = %d\n", originalNum, sum);
    
    return 0;
}
