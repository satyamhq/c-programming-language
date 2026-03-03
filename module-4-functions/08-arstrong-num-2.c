#include <stdio.h>
#include <math.h>

void armstrong(int n) {
    int org = n, temp = n, d, c = 0;
    int res = 0;

    // Count digits
    while (n != 0) {
        n = n / 10;
        c++;
    }

    // Calculate sum
    while (temp != 0) {
        d = temp % 10;
        res = res + pow(d, c);
        temp = temp / 10;
    }

    if (org == res)
        printf("%d is an Armstrong number\n", org);
    else
        printf("%d is not an Armstrong number\n", org);
}

int main() {
    armstrong(11);
    return 0;
}
