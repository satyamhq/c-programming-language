/*
 * Program 41: Check Palindrome Number
 * Description: Checks if a number is palindrome (same forward and backward).
 *              Example: 121, 12321, 1001 are palindromes.
 * 
 * Concepts Covered:
 * - Number reversal
 * - Comparison logic
 * - While loop
 */

#include <stdio.h>

int main() {
    int num, originalNum, reversed = 0, remainder;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    originalNum = num;
    
    // Reverse the number
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num = num / 10;
    }
    
    printf("\nOriginal Number: %d\n", originalNum);
    printf("Reversed Number: %d\n", reversed);
    
    if (originalNum == reversed) {
        printf("\n%d is a PALINDROME number.\n", originalNum);
    } else {
        printf("\n%d is NOT a palindrome number.\n", originalNum);
    }
    
    return 0;
}
