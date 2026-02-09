/*
 * Program 15: Reverse a Number
 */

#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    int originalNum = num;
    
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num = num / 10;
    }
    
    printf("Reverse of %d = %d\n", originalNum, reversed);
    
    return 0;
}
