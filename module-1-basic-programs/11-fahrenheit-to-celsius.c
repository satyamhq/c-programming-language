/*
 * Program 11: Convert Fahrenheit to Celsius
 * Formula: C = (F - 32) * 5/9
 */

#include <stdio.h>

int main() {
    float fahrenheit, celsius;
    
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    
    celsius = (fahrenheit - 32) * 5 / 9;
    
    printf("%.2f Fahrenheit = %.2f Celsius\n", fahrenheit, celsius);
    
    return 0;
}
