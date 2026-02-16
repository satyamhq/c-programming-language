#include<stdio.h>

int main(){
    int i = 0, n;
    printf("Enter a number: ");
    scanf("%d", &n);

    do {
        printf("%d \t", i);
        i++;
    } while (i > n);
}
