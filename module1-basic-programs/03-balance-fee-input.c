#include <stdio.h>

int main() {
    int balance;
    char status;

    // Taking inputs
    printf("Enter balance: ");
    scanf("%d", &balance);

    printf("Fee paid? (Y/N): ");
    scanf(" %c", &status);   // space before %c is important

    // Displaying inputs
    printf("\nBalance: %d", balance);
    printf("\nFee Status: %c", status);

    return 0;
}
