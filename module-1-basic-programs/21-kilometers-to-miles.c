/*
 * Program 21: Convert Kilometers to Miles
 * Formula: Miles = Kilometers * 0.621371
 */

#include <stdio.h>

int main() {
    float kilometers, miles;
    
    printf("Enter distance in Kilometers: ");
    scanf("%f", &kilometers);
    
    miles = kilometers * 0.621371;
    
    printf("%.2f Kilometers = %.2f Miles\n", kilometers, miles);
    
    return 0;
}
