#include <stdio.h>

void check_strong_num(int n) {
    int original = n;
    int sum = 0, digit, i, fact;

    while (n > 0) {
        digit = n % 10;

        fact = 1;
        for (i = 1; i <= digit; i++) {
            fact = fact * i;
        }

        sum = sum + fact;
        n = n / 10;
    }

    if (sum == original)
        printf("%d is a strong number.\n", original);
    else
        printf("%d is not a strong number.\n", original);
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    check_strong_num(num);
    return 0;
}