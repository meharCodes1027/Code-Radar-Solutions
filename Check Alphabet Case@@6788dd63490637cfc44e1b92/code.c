#include <stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z') {
        char upperCh = ch - 32;
        printf("Lowercase", upperCh);
    }
    else if (ch >= 'A' && ch <= 'Z') {
        char lowerCh = ch + 32; 
        printf("Uppercase", lowerCh);
    } else {
        printf("Not an alphabet\n");
    }

    return 0;
}

