/*
 * Program 26: Count Number of Digits in a Number
 */

#include <stdio.h>

int main() {
    int num, count = 0;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    int originalNum = num;
    
    // Handle negative numbers
    if (num < 0) {
        num = -num;
    }
    
    // Handle zero case
    if (num == 0) {
        count = 1;
    } else {
        while (num != 0) {
            num = num / 10;
            count++;
        }
    }
    
    printf("Number of digits in %d = %d\n", originalNum, count);
    
    return 0;
}
