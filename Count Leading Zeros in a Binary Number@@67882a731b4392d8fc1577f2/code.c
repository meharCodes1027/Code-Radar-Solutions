// Your code here...
#include <stdio.h>

int countLeadingZeros(int num) {
    if (num == 0) return 32;
    int count = 0;
    while ((num & (1 << 31)) == 0) {
        count++;
        num <<= 1;
    }
    return count;
}

int main() {
    int num;
    scanf("%d", &num);
    printf("%d\n", countLeadingZeros(num));
    return 0;
}

