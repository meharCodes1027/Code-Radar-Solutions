#include <stdio.h>

int main() {
    int num1, num2;
    scanf("%d", &num1);
    scanf("%d", &num2);
    if (num2 >= num1) {
        printf("False\n");
    } else {
        printf("True\n");
    }
    return 0;
}
