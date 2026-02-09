/*
 * Program 50: Check Leap Year
 * Description: Determines if a given year is a leap year.
 * 
 * Leap Year Rules:
 * 1. Divisible by 4
 * 2. If divisible by 100, must also be divisible by 400
 * 
 * Concepts Covered:
 * - Logical operators (&&, ||)
 * - Complex conditions
 * - Calendar logic
 */

#include <stdio.h>

int main() {
    int year;
    int isLeap = 0;
    
    printf("Enter a year: ");
    scanf("%d", &year);
    
    // Leap year logic
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        isLeap = 1;
    }
    
    printf("\n");
    if (isLeap) {
        printf("%d is a LEAP YEAR.\n", year);
        printf("February has 29 days.\n");
    } else {
        printf("%d is NOT a leap year.\n", year);
        printf("February has 28 days.\n");
    }
    
    // Additional info
    printf("\nExplanation:\n");
    printf("- Divisible by 4: %s\n", (year % 4 == 0) ? "Yes" : "No");
    printf("- Divisible by 100: %s\n", (year % 100 == 0) ? "Yes" : "No");
    printf("- Divisible by 400: %s\n", (year % 400 == 0) ? "Yes" : "No");
    
    return 0;
}
