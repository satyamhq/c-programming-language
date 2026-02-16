#include <stdio.h>

int main() {
    int i = 0, j = 0;

    while (i < 10 && j < 10) {
        i++;
        j++;
        printf("%d %d\n", i, j);
    }

    return 0;
}
