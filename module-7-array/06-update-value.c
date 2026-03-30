#include <stdio.h>

int main() {
    int arr[6] = {10, 34, 3, 5, 18, 26};
    int index, value;

    printf("Enter index to update: ");
    scanf("%d", &index);

    printf("Enter new value: ");
    scanf("%d", &value);

    arr[index] = value;

    printf("Updated array:\n");
    for(int i = 0; i < 6; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}