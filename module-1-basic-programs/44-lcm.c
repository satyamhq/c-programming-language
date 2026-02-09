/*
 * Program 44: Find LCM (Least Common Multiple)
 * Description: Finds LCM of two numbers.
 *              LCM = (num1 * num2) / GCD
 * 
 * Concepts Covered:
 * - LCM and GCD relationship
 * - Mathematical formulas
 * - Function-like logic
 */

#include <stdio.h>

int main() {
    int num1, num2, a, b, temp, gcd, lcm;
    
    printf("Enter first number: ");
    scanf("%d", &num1);
    
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    a = num1;
    b = num2;
    
    // Find GCD using Euclidean Algorithm
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    gcd = a;
    
    // Calculate LCM using formula: LCM = (num1 * num2) / GCD
    lcm = (num1 * num2) / gcd;
    
    printf("\nResults for %d and %d:\n", num1, num2);
    printf("GCD = %d\n", gcd);
    printf("LCM = %d\n", lcm);
    
    return 0;
}
