#include <stdio.h>

int main() {
    int num, i, found = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 2) {
        printf("Number is not prime");
        return 0;
    }

    for (i = 2; i < num; i++) {
        if (num % i == 0) {
            found = 1;
            break;
        }
    }

    if (found == 1) {
        printf("Not a prime number");
    } else {
        printf("Prime number");
    }

    return 0;   // return sends a value back from a function and stops the function.
}
