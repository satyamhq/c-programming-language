/*
 * Program 22: Calculate Perimeter of Rectangle
 * Formula: Perimeter = 2 * (length + width)
 */

#include <stdio.h>

int main() {
    float length, width, perimeter;
    
    printf("Enter length of rectangle: ");
    scanf("%f", &length);
    
    printf("Enter width of rectangle: ");
    scanf("%f", &width);
    
    perimeter = 2 * (length + width);
    
    printf("Perimeter of Rectangle = %.2f\n", perimeter);
    
    return 0;
}
