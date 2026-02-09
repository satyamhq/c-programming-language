/*
 * Program 46: Simple Calculator using Switch-Case
 * Description: Performs basic arithmetic operations using switch-case.
 * 
 * Concepts Covered:
 * - switch-case statement
 * - Character input
 * - Menu-driven program
 */

#include <stdio.h>

int main() {
    double num1, num2, result;
    char operator;
    
    printf("===== Simple Calculator =====\n");
    printf("Operations: + - * / %%\n\n");
    
    printf("Enter first number: ");
    scanf("%lf", &num1);
    
    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);
    
    printf("Enter second number: ");
    scanf("%lf", &num2);
    
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("\n%.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;
            
        case '-':
            result = num1 - num2;
            printf("\n%.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;
            
        case '*':
            result = num1 * num2;
            printf("\n%.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;
            
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
                printf("\n%.2lf / %.2lf = %.2lf\n", num1, num2, result);
            } else {
                printf("\nError: Division by zero!\n");
            }
            break;
            
        case '%':
            if ((int)num2 != 0) {
                printf("\n%d %% %d = %d\n", (int)num1, (int)num2, (int)num1 % (int)num2);
            } else {
                printf("\nError: Division by zero!\n");
            }
            break;
            
        default:
            printf("\nError: Invalid operator!\n");
    }
    
    return 0;
}
