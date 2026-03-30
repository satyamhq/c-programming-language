#include <stdio.h>

int main() {
    int price[5] = {10, 25, 2, 18, 45};
    int i, max = price[0], min = price[0];
    
    for(i = 1; i < 5; i++) {
        if(price[i] > max) {
            max = price[i];
        }
        if(price[i] < min) {
            min = price[i];
        }
    }

    // print result
    printf("Maximum value = %d\n", max);
    printf("Minimum value = %d\n", min);

    return 0;
}