#include <stdio.h>

int main() {
    int num1, num2;
    char operator;
    
    // Input two numbers followed by the operator
    scanf("%d %d %c", &num1, &num2, &operator);
    
    // Perform the operation based on the operator
    switch (operator) {
        case '+':
            printf(" %d\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf(" %d\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%d\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                // Perform integer division and print the result
                printf(" %d\n", num1, num2, num1 / num2);
            } else {
                printf("Error");
            }
            break;
        default:
            printf("Error");
    }

    return 0;
}

