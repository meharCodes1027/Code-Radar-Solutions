#include <stdio.h>

int main() {
    int num, i;

    scanf("%d", &num);
    if (num <= 1) {
        printf("Not Prime\n");
    } else {
        int isPrime = 1; 
        for (i = 2; i * i <= num; i++) {  
            if (num % i == 0) {
                isPrime = 0;  
                break;
            }
        }

        (isPrime == 1) ? printf("Prime\n") : printf("Not Prime\n");
    }

    return 0;
}
