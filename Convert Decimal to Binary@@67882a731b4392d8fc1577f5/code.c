// Your code here...
#include <stdio.h>

void decimalToBinary(int num) {
    if (num > 1)
        decimalToBinary(num / 2);  
    printf("%d", num % 2); 
}

int main() {
    int num;
    scanf("%d", &num);
    printf("%d ", num);
    decimalToBinary(num); 
    printf("\n");
    return 0;
}
