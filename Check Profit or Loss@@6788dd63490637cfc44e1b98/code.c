#include <stdio.h>
int main() {
    int a; int b;
    scanf("%d %d", int a, int b);
    if (a > b) {
        printf ("Profit");  
    } 
    else if (a < b) {
        printf("Loss");  
    }
    else {
        printf("No Profit, No Loss (Break Even)\n");  
    }

    return 0;
    
    }