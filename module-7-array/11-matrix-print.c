#include <stdio.h>

int main() {
    int mat[2][2] = {{5, 10}, {40, 70}};

    printf("%d", mat[1][0]); // Accessing element at row 1 and column 0

    printf("\nThe array: \n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}
// column size is mandatory in 2D array declaration because the compiler needs it to calculate the memory location of elements.