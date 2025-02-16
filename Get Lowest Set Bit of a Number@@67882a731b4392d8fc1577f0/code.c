// Your code here...
#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    int lowest_set_bit = num & -num;
    printf("%d\n", num & -num);
    
    return 0;
}
