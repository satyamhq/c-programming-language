#include <stdio.h>

void check_prime(int n) {
    int i;

    if (n <= 1) {
        printf("%d is not a prime number.\n", n);
        return;
    }

    for (i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            printf("%d is not a prime number.\n", n);
            return;
        }
    }

    printf("%d is a prime number.\n", n);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    check_prime(num);
    return 0;
}
