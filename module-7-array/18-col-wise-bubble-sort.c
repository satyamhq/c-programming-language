#include <stdio.h>

int main() {
    int arr[3][3] = {
        {5, 8, 6},
        {3, 12, 9},
        {1, 4, 15}
    };

    int row = 3, col = 3;

    // Column-wise Bubble Sort
    for (int c = 0; c < col; c++) {
        for (int i = 0; i < row - 1; i++) {
            for (int j = 0; j < row - i - 1; j++) {

                // Compare elements in same column
                if (arr[j][c] > arr[j + 1][c]) {
                    int temp = arr[j][c];
                    arr[j][c] = arr[j + 1][c];
                    arr[j + 1][c] = temp;
                }
            }
        }
    }

    // Print Sorted Array
    printf("Column-wise sorted array:\n");
    for (int r = 0; r < row; r++) {
        for (int c = 0; c < col; c++) {
            printf("%d ", arr[r][c]);
        }
        printf("\n");
    }

    return 0;
}