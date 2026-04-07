#include <stdio.h>

int main() {
    int arr[] = {5, 3, 2, 4};
    int n = 4;
    int i, j, temp, swapped;

    for(i = 0; i < n-1; i++) {
        swapped = 0;

        for(j = 0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = 1;
            }
        }

        if(swapped == 0) {
            break; // already sorted
        }
    }

    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}