#include <stdio.h>
int main () {
    int num1,num2;
    scanf("%d %d", &num1, &num2);
    num1 % num2 == 0 ? printf("Yes\n") : printf("No\n");
    return 0;

}