// Write a user define function to compute the cubic sum of its digit.
#include <stdio.h>

int cubic_sum(int n) {
    int d, s = 0;

    if (n < 0) {
        printf("Invalid number\n");
        return -1;
    }

    while (n != 0) {
        d = n % 10; 
        s = s + (d * d * d);
        n = n / 10;
    }

    return s;
}

int main() {
    int num, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    result = cubic_sum(num);

    if (result == -1)
        printf("Invalid number\n");
    else
        printf("Cubic sum of digits = %d\n", result);

    return 0;
}
