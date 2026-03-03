// Write a user define function to compute the cubic sum of its digit.
#include <stdio.h>
int main() {
    int num, sum = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num > 0) {
        rem = num % 10;
        sum = sum + (rem * rem * rem);
        num = num / 10;
    }
    printf("Cubic sum of digits is: %d", sum);
    return 0;
}
