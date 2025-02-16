#include <stdio.h>
int main () {
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    if(num1==num2){
        printf("Equal");
    }
    if(num1>num2){
        printf("First");
    }
    if(num1<num2){
        printf("Second");
    }
    return 0;
}