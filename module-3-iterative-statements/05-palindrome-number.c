#include<stdio.h>

int main(){
    int num, digit, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    int org = num;
    while(num > 0){
        digit = num % 10;
        rev = rev * 10 + digit;
        num = num / 10;
    } 
    if(org == rev){
        printf("The number is palindrome.");
    }
    else{
        printf("The number is not palindrome.");
    }
}