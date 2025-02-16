// Your code here...
#include <stdio.h>

int main () {
    int age;
    char citi;
    scanf("%d %c", &age, &citi);

    if (age >= 18 && citi == '1') {
        printf("Eligible\n");
    }
    else {
        printf("Not Eligible\n");
    }

    return 0;
}
