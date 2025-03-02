// Your code here...
#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    
    if (num == 1) {
        printf("0\n");
    } else {
        int lowest_set_bit = num & -num;
        printf("%d %d\n", num, lowest_set_bit);
    }
    
    return 0;
}



