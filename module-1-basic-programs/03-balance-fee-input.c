/*
 * Program 03: Multiple Data Type Input
 * Description: Demonstrates taking different data types as input
 *              (int, float, char) and displaying them.
 * 
 * Concepts Covered:
 * - Different data types (int, float, char)
 * - Format specifiers (%d, %f, %c)
 * - scanf() with different data types
 * - Note: Space before %c in scanf to skip whitespace
 */

#include <stdio.h>

int main() {
    int balance;
    float interestRate;
    char status;
    
    // Taking integer input
    printf("Enter your balance (integer): ");
    scanf("%d", &balance);
    
    // Taking float input
    printf("Enter interest rate (float): ");
    scanf("%f", &interestRate);
    
    // Taking character input
    // Note: Space before %c is important to skip newline from previous input
    printf("Fee paid? (Y/N): ");
    scanf(" %c", &status);
    
    // Displaying all inputs
    printf("\n===== Your Details =====\n");
    printf("Balance: %d\n", balance);
    printf("Interest Rate: %.2f%%\n", interestRate);
    printf("Fee Status: %c\n", status);
    
    return 0;
}
