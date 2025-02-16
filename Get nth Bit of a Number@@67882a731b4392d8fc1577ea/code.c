// Your code here...
#include <stdio.h>

int main() {
    int num, n;
    scanf("%d %d", &num, &n);
    int mask = 1 << n;
    int nth_bit = (num & mask) >> n;  
    
    printf("%d\n", nth_bit);
    
    return 0;
}
