/*
 * Program 29: Calculate Square Root of a Number
 */

#include <stdio.h>
#include <math.h>

int main() {
    double num, result;
    
    printf("Enter a number: ");
    scanf("%lf", &num);
    
    if (num < 0) {
        printf("Error: Cannot calculate square root of a negative number.\n");
    } else {
        result = sqrt(num);
        printf("Square root of %.2lf = %.4lf\n", num, result);
    }
    
    return 0;
}
