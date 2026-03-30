#include <stdio.h>

int main() {
    int arr[5] = {5, 11, 20, 19, 30};
    int index, value;

    printf("Enter index to update: ");
    scanf("%d", &index);

    printf("Enter new value: ");
    scanf("%d", &value);

    arr[index] = value;

    printf("Updated array:\n");
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}