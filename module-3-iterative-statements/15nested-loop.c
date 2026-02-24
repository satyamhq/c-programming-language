#include <stdio.h>

int main() {
    for(int i = 1; i <= 3; i++) {          // outer loop
        for(int j = 1; j <= 3; j++) {      // inner loop
            if (j == 2) {
                break;   // breaks ONLY the inner loop
            }
            printf("i=%d j=%d\n", i, j);
        }
    }
    return 0;
}