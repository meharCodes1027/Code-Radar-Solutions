#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    
    if (num == 0) {
        printf("0\n");
        return 0;
    }
    int position = 0;
    
    while ((num & 1) == 0) {  
        num >>= 1;
        position++;
    }

    printf("%d\n", position);
    
    return 0;
}



