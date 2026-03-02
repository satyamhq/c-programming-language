#include <stdio.h>

void check_num() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n > 0) {
        printf("The number is positive.\n");
    } else if (n < 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
    }
}

void check_even_odd() {
    int m;
    printf("Enter a number to check if it's even or odd: ");
    scanf("%d", &m);

    if (m % 2 == 0) {
        printf("The number is even.\n");
    } else {
        printf("The number is odd.\n");
    }
}

int main() {
    check_num();
    check_even_odd();
    return 0;
}