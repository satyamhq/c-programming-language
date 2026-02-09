/*
 * Program 23: Calculate Circumference of Circle
 * Formula: Circumference = 2 * π * r
 */

#include <stdio.h>
#define PI 3.14159

int main() {
    float radius, circumference;
    
    printf("Enter the radius of circle: ");
    scanf("%f", &radius);
    
    circumference = 2 * PI * radius;
    
    printf("Circumference of Circle = %.2f\n", circumference);
    
    return 0;
}
