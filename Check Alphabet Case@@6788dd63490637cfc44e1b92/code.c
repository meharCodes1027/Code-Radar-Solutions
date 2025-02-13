#include <stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z') {
        char lowerCh = ch - 32;
        printf("Lowercase", lowerCh);
    }
    else if (ch >= 'A' && ch <= 'Z') {
        char upperCh = ch + 32; 
        printf("Uppercase", upperCh);
    } else {
        printf("Not an alphabet\n");
    }

    return 0;
}

