// Your code here...
#include <stdio.h>
int main (){
    int num;
    scanf("%d", &num);
    num >= 1 && num <= 100 ? printf("In Range") : printf("Out of Range");
    return 0;
}