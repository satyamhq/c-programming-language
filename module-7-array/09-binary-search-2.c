#include <stdio.h>

int main() {
    int arr[9] = {5, 12, 17, 17, 25, 30, 40, 91, 115};
    int n = 9;
    int target = 17;

    int start = 0, end = n - 1;
    int mid;

    while (start <= end) {
        mid = (start + end) / 2;

        if (arr[mid] == target) {
            printf("Element found at index %d", mid);
            return 0;
        }
        else if (arr[mid] < target) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }

    printf("Element not found");
    return 0;
}