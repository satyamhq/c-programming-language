/*
 * Program 08: Calculate Area of Triangle
 * Formula: Area = (1/2) * base * height
 */

#include <stdio.h>

int main() {
    float base, height, area;
    
    printf("Enter the base of triangle: ");
    scanf("%f", &base);
    
    printf("Enter the height of triangle: ");
    scanf("%f", &height);
    
    area = 0.5 * base * height;
    
    printf("Area of Triangle = %.2f\n", area);
    
    return 0;
}
