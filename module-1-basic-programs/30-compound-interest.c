/*
 * Program 30: Calculate Compound Interest
 * Formula: A = P * (1 + R/100)^T
 * Compound Interest = A - P
 */

#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time;
    double amount, compoundInterest;
    
    printf("Enter Principal Amount: ");
    scanf("%lf", &principal);
    
    printf("Enter Rate of Interest (per annum): ");
    scanf("%lf", &rate);
    
    printf("Enter Time (in years): ");
    scanf("%lf", &time);
    
    // Calculate Amount: A = P * (1 + R/100)^T
    amount = principal * pow((1 + rate / 100), time);
    
    // Calculate Compound Interest
    compoundInterest = amount - principal;
    
    printf("\n===== Results =====\n");
    printf("Principal Amount: %.2lf\n", principal);
    printf("Rate of Interest: %.2lf%%\n", rate);
    printf("Time Period: %.0lf year(s)\n", time);
    printf("Final Amount: %.2lf\n", amount);
    printf("Compound Interest: %.2lf\n", compoundInterest);
    
    return 0;
}
