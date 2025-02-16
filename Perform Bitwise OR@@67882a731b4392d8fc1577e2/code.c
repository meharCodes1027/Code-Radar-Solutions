// Your code here...
#include <stdio.h>
int main() {
    int m, n, result;
    scanf("%d %d", &m, &n);
    result = (m >= 0 && n >= 0) ? (m | n) : 0; 
    printf("%d\n",result);

    return 0;
    
    
    }