#include <stdio.h> 

int main() {
    int mat[][3] = {{5, 10, 15}, {40, 70, 100}, {25, 45, 65}};
    printf("The array: \n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}