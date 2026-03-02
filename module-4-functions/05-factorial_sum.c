#include <stdio.h>

// Function to calculate factorial
int fact(int num) {
    int i;
    int f = 1;

    for(i = 1; i <= num; i++) {
        f = f * i;
    }

    return f;
}

int main() {
    int n, i;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        sum = sum + fact(i);
    }

    printf("Sum of factorials = %d", sum);

    return 0;
}