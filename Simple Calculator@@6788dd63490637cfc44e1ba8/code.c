#include <stdio.h>

int main() {
    int num1, num2;
    char operator;

    // Input the operator and two numbers
    scanf(" %c", &operator);
    scanf("%d %d", &num1, &num2);

    // Perform the operation based on the operator
    switch (operator) {
        case '+':
            printf("%d + %d = %d\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%d - %d = %d\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%d * %d = %d\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                // Perform division, cast to float for more accurate results
                printf("%d / %d = %.2f\n", num1, num2, (float)num1 / num2);
            } else {
                printf("Error: Division by zero\n");
            }
            break;
        default:
            printf("Invalid operator!\n");
    }

    return 0;
}


}