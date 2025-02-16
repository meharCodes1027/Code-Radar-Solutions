#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    if (num == 0) {
        printf("Not Set");
    } else {
        while (num > 1 || num < -1) {
            num >>= 1;
        }
        if (num == 1) {
            printf("Not Set");
        } else {
            printf("Set");
        }
    }

    return 0;
}
