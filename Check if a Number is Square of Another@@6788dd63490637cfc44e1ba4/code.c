#include <stdio.h>
#include <math.h>

int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    if (num1 * num1 == num2) {
        printf("%d is the square of %d.\n", num2, num1);
    } else if (num2 * num2 == num1) {
        printf("%d is the square of %d.\n", num1, num2);
    } else {
        printf("Neither number is the square of the other.\n");
    }

    return 0;
}
