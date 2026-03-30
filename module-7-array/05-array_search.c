#include <stdio.h>

int main() {
    int arr[5] = {5, 11, 20, 19, 30};
    int val = 22;
    int k = 0; // false
    int i;     // declare i

    for (i = 0; i < 5; i++) {
        if (arr[i] == val) {
            k = 1; // true
            break;
        }
    }

    if (k == 1) {
        printf("Value found at index %d", i);
    } else {
        printf("Value not found in the array");
    }

    return 0;
}