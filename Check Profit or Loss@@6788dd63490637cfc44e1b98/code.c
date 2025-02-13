#include <stdio.h>
int main() {
    int a; int b;
    scanf("%d %d",  &a,  &b);
    if (a > b) {
        printf ("Profit", a-b);  
    } 
    else if (a < b) {
        printf("Loss",b-a);  
    }
    else {
        printf("No Profit No Loss ");  
    }

    return 0;
    
    }