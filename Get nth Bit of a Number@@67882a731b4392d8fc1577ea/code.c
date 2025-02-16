// Your code here...
#include <stdio.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    int mask = 1 << n;
    int nth_bit = (m & mask) >> n;  
    
    printf("%d\n", nth_bit);
    
    return 0;
}
