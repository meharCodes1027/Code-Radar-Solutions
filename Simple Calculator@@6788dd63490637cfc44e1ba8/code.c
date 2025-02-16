// Your code here...
#include <stdio.h>
int main() {
    int num1, num2;
    char operator;
    scanf(" %c", &operator);
    scanf("%d %d", &num1, &num2);
    switch (operator) {
        case '+':
            printf("%d + %d = %.d", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%d - %d = %d", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%d * %d = %d", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("%d / %d = %d", num1, num2, num1 / num2);
            } else {
                printf("Error");
            }
            break;
        default:
            printf("Invalid operator! Please enter one of +, -, *, or /.\n");
    }

    return 0;

}