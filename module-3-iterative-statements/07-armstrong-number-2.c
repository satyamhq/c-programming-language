#include <stdio.h>
#include <math.h>

int main() {
    int num, digit, c = 0;
    double res = 0.0;

    printf("Enter a number: ");
    scanf("%d", &num);

    int org = num;
    int temp = num;

    while (temp != 0){
        temp = temp / 10;
        c++;
    }

    temp = num;

    while (temp != 0){
        digit = temp % 10;
        res += pow(digit, c);
        temp = temp / 10;
    }

    if (org == (int)res){
        printf("Armstrong number");
    }
    else{
        printf("Not an Armstrong number");
    }

    return 0;
}
