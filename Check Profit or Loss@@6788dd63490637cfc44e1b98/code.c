#include <stdio.h>

int main() {
    int a, b;

    scanf("%d %d", &a, &b);

    if (a > b) {
        printf("Loss", a - b);  
    } 
    else if (a < b) {
        printf("Profit", b - a);  
    }
    else {
        printf("No Profit No Loss\n");
    }

    return 0;
}

