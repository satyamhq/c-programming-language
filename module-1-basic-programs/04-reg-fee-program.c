/*
 * Program 04: Constants and Variables
 * Description: Demonstrates the use of constants (using #define and const)
 *              and variables in C programming.
 * 
 * Concepts Covered:
 * - #define preprocessor directive
 * - const keyword
 * - Variable initialization
 * - Arithmetic with constants
 */

#include <stdio.h>

// Defining constants using #define
#define REGISTRATION_FEE 5000
#define EXAM_FEE 2500
#define TAX_RATE 0.18

int main() {
    // Using const keyword for constants
    const int lateFee = 500;
    
    // Variables
    int studentId = 12505700;
    char studentName[] = "John Doe";
    
    // Calculations
    float totalFee = REGISTRATION_FEE + EXAM_FEE + lateFee;
    float taxAmount = totalFee * TAX_RATE;
    float grandTotal = totalFee + taxAmount;
    
    // Display Details
    printf("===== Student Fee Details =====\n\n");
    printf("Student ID: %d\n", studentId);
    printf("Student Name: %s\n", studentName);
    printf("\n----- Fee Breakdown -----\n");
    printf("Registration Fee: Rs. %d\n", REGISTRATION_FEE);
    printf("Exam Fee: Rs. %d\n", EXAM_FEE);
    printf("Late Fee: Rs. %d\n", lateFee);
    printf("Subtotal: Rs. %.2f\n", totalFee);
    printf("Tax (18%%): Rs. %.2f\n", taxAmount);
    printf("Grand Total: Rs. %.2f\n", grandTotal);
    
    return 0;
}
