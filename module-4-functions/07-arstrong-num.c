// Write function for Arstrong number.
#include <stdio.h>
int armstrong(int n) {
    int d, s = 0, temp;

    if (n < 0) {
        printf("Invalid number\n");
        return -1;
    }

    temp = n;

    while (temp != 0) {
        d = temp % 10; 
        s = s + (d * d * d);
        temp = temp / 10;
    }

    if (s == n)
        return 1;
    else
        return 0;
}