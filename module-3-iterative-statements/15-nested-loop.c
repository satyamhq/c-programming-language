#include <stdio.h>

int main() {
    for(int i = 1; i <= 5; i++) {          // outer loop
        for(int j = i; j <= 5; j++) {      // inner loop
            if (i == 3 && j == 3) {
                break;   // breaks only the inner loop
            }
            printf("%d\t", j);
        }
        printf("%d\n", i);   // prints value of i after inner loop
    }
    return 0;
}