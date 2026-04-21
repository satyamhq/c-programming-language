#include <stdio.h>

int main(){
    int i, n;
    int a[10], *parr = a;   // parr points to a[0]

    printf("\nEnter the number of elements in the array: ");
    scanf("%d", &n);

    printf("\nEnter the elements of the array: ");
    for(i = 0; i < n; i++){
        scanf("%d", parr + i);   // correct
    }

    printf("\nThe elements of the array are:\n");
    for(i = 0; i < n; i++){
        printf("%d ", *(parr + i));
    }

    return 0;
}