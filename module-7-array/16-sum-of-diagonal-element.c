#include <stdio.h>

int main() {
    int A[3][3];
    int sum = 0;

    // Input matrix
    printf("Enter elements of 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Sum of diagonal elements
    for (int i = 0; i < 3; i++) {
        sum += A[i][i];   // main diagonal
    }

    // Output
    printf("Sum of diagonal elements = %d\n", sum);

    return 0;
}