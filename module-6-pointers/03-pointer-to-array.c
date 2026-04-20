#include <stdio.h>

int main() {
    int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int *p1;

    p1 = arr;  // points to arr[0]
    
    printf("Initial: %d\n", *p1);

    p1++;  // move to arr[1]
    printf("After p1++: %d\n", *p1);

    p1--;  // back to arr[0]
    printf("After p1--: %d\n", *p1);

    p1 += 4;  // jump to arr[4]
    printf("After p1 += 4: %d\n", *p1);

    p1 -= 2;  // move back to arr[2]
    printf("After p1 -= 2: %d\n", *p1);

    // using pointer like array
    printf("Using p1[2]: %d\n", p1[2]);  // same as *(p1 + 2)

    

    return 0;
}