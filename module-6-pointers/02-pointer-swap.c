#include<stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    printf("Inside swap function: a = %d, b = %d\n", *a, *b);
}
int main() {
    int y = 10, z = 20;
    swap(&y, &z);
    printf("Inside main function: y = %d, z = %d\n", y, z);
}