#include <stdio.h>

int main() {
    int n, digit;

    printf("Enter an even number: ");
    scanf("%d", &n);

    if (n % 2 != 0) {
        printf("Not an even number");
        return 0;
    }

    while (n > 0) {
        digit = n % 10;

        if (digit % 2 == 0) {
            printf("%d\n", digit);
        }

        n = n / 10;
    }

    return 0;
}
