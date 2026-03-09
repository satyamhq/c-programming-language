#include <stdio.h>

int fact_sum_digits (int n) {
    int d, s = 0, org = n, fact = 1;
    while  (n > 0) {
        d = n % 10;
        for (int i = 1; i <= d; i++) {
            fact *= i;
        }
        s += fact;
        fact = 1;
        n /= 10;
    }
    printf("Sum of factorial of digits of %d is %d\n", org, s);
}