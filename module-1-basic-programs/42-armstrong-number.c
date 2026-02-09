/*
 * Program 42: Check Armstrong Number
 * Description: Armstrong number equals sum of cubes of its digits.
 *              Example: 153 = 1³ + 5³ + 3³ = 1 + 125 + 27 = 153
 * 
 * Concepts Covered:
 * - Digit extraction
 * - Power calculation
 * - Number properties
 */

#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder;
    int digits = 0;
    double sum = 0;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    originalNum = num;
    
    // Count number of digits
    int temp = num;
    while (temp != 0) {
        digits++;
        temp = temp / 10;
    }
    
    // Calculate sum of powers of digits
    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        sum += pow(remainder, digits);
        temp = temp / 10;
    }
    
    printf("\nNumber: %d\n", originalNum);
    printf("Number of digits: %d\n", digits);
    printf("Sum of digits^%d: %.0lf\n", digits, sum);
    
    if ((int)sum == originalNum) {
        printf("\n%d is an ARMSTRONG number.\n", originalNum);
    } else {
        printf("\n%d is NOT an Armstrong number.\n", originalNum);
    }
    
    return 0;
}
