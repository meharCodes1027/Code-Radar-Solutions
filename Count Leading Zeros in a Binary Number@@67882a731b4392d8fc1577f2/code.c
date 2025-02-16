// Your code here...
#include <stdio.h>

int countLeadingZeros(int num) {
    int count = 0;
    while (num < (1 << 31)) { 
        count++;
        num <<= 1;  
    }
    return count;
}

int main() {
    int num;
    scanf("%d", &num);
    printf("%d\n", num, countLeadingZeros(num));
    return 0;
}
