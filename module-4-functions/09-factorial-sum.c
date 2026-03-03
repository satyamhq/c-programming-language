#include <stdio.h>

int fact(int n) {
    int i, f = 1;
    for(i = 1; i <= n; i++) {
        f = f * i;
    }
    return f;
}

int factorial_sum(int num) {
    int digit, sum = 0;

    while(num != 0) {
        digit = num % 10;        
        sum = sum + fact(digit); 
        num = num / 10;           
    }

    return sum;
}

int main() {
    int result;
    result = factorial_sum(123);
    printf("Sum of factorial of digits = %d", result);
    return 0;
}