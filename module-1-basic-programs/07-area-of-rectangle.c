/*
 * Program 07: Calculate Area of Rectangle
 * Formula: Area = length * width
 */

#include <stdio.h>

int main() {
    float length, width, area;
    
    printf("Enter the length of rectangle: ");
    scanf("%f", &length);
    
    printf("Enter the width of rectangle: ");
    scanf("%f", &width);
    
    area = length * width;
    
    printf("Area of Rectangle = %.2f\n", area);
    
    return 0;
}
