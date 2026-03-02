#include <stdio.h>

void details() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("The number you entered is: %d\n", n);
}

int main() {
    details();
    
    return 0;
}