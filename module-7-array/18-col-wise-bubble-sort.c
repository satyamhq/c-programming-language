#include <stdio.h>

int main(){
    int arr[3][3] = {
        {5, 8, 6},
        {3, 12, 9},
        {1, 4, 15}
    };

    printf("Original array: \n");

    int col = 3;
    int row = 3;

    for(int r = 0; r < row; r++) {
        for(int c = 0; c < col; c++) {
            printf("%d ", arr[r][c]);
        }
        printf("\n");
    }

    return 0;
}