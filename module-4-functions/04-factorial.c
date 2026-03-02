#include <stdio.h>

void factorial(int n) {
    long long fact = 1;
    int i;

    for(i = 1; i <= n; i++) {
        fact = fact * i;
    }

    printf("Factorial = %lld\n", fact);
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    factorial(num);   // function call

    return 0;
}