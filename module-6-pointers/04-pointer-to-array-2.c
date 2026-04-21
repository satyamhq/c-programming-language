#include<stdio.h>

int main() {
    int n = 5;
    int arr[5] = {12, 55, 88, 125, 178};

    printf("%p", arr);   // prints base address (address of arr[0])

    printf("\n%p", &arr[0]); // also prints address of arr[0]
    printf("\n%p", &arr[1]); // prints address of arr[1]
    printf("\n%p", &arr[2]); // prints address of arr[2]   // printf("%p", arr + 2); --> same as &arr[2]
    printf("\n%p", &arr[3]); // prints address of arr[3]
    printf("\n%p", &arr[4]); // prints address of arr[4]

    int *p = arr; // p points to arr[0]
    printf("\n%p", p); // prints address of arr[0]

    return 0;
}