#include <stdio.h>

int main() {
    int num1, num2;
    char op;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &op);  

    switch (op) {
        case '+':
            printf("Result = %d", num1 + num2);
            break;

        case '-':
            printf("Result = %d", num1 - num2);
            break;

        case '*':
            printf("Result = %d", num1 * num2);
            break;

        case '/':
            if (num2 != 0)
                printf("Result = %d", num1 / num2);
            else
                printf("Division not possible");
            break;

        default:
            printf("Invalid operator");
            break;
    }

    return 0;
}

