// Your code here...
#include <stdio.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);
    int mask = 1 << n;
    mask = ~mask;
    m = m & mask;
    
    printf("%d\n",m);
    
    return 0;
}
