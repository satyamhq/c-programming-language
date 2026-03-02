#include <stdio.h>

// function returning factorial
int fact(int n)
{
    int i;
    int f = 1;

    for(i = 1; i <= n; i++)
    {
        f = f * i;
    }

    return f;   // returning value
}

int main()
{
    int num, result;

    printf("Enter a number: ");
    scanf("%d", &num);

    result = fact(num);   // function call

    printf("Factorial of %d is %d", num, result);

    return 0;
}