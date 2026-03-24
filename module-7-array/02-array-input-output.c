#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid size!");
        return 0;
    }

    int reg_no[n];

    printf("Enter %d registration numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &reg_no[i]);
    }

    printf("The registration numbers are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", reg_no[i]);
    }

    return 0;
}