#include <stdio.h>

int main() {
    int a = 10;
    printf("Int memory size = %u", sizeof(a));

    float price = 75.55;
    printf("\nFloat memory size = %u", sizeof(price));

    double salary = 105.25;
    printf("\nDouble memory size = %u", sizeof(salary));

    return 0;
}
