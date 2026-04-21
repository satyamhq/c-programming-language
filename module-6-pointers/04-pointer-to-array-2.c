#include<stdio.h>

int main() {
    int arr[5] = {12, 55, 88, 125, 178};

    printf("Base address:\n");
    printf("%p\n", arr);

    printf("\nAddresses of elements:\n");
    printf("arr[0]: %p\n", &arr[0]);
    printf("arr[1]: %p\n", &arr[1]);
    printf("arr[2]: %p\n", &arr[2]);
    printf("arr[3]: %p\n", &arr[3]);
    printf("arr[4]: %p\n", &arr[4]);

    int *p = arr;

    printf("\nPointer operations:\n");

    printf("p (start): %p\n", p);

    printf("p++ : %p\n", p++);   // prints arr[0], then moves to arr[1]
    printf("++p : %p\n", ++p);   // moves to arr[2], then prints
    printf("p-- : %p\n", p--);   // prints arr[2], then moves to arr[1]
    printf("--p : %p\n", --p);   // moves to arr[0], then prints

    return 0;
}