// WAP to find the sum of digits of a number using function.

#include <stdio.h>

int sum_of_digits(int n) {
    int sum = 0, digit;
    while(n > 0) {
        digit = n % 10;
        sum += digit;
        n = n / 10;
    }
    return sum;
}
