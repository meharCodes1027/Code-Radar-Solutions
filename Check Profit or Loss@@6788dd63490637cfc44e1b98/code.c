#include <stdio.h>

int main() {
    int a, b;

    scanf("%d %d", &a, &b);
    if (a > b) {
        printf("Loss: %d\n", a - b); 
    else if (a < b) {
        printf("Profit: %d\n", b - a);  
    }
    else {
        printf("No Profit No Loss\n");  
    }

    return 0;
}
