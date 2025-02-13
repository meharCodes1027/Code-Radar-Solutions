#include <stdio.h>
int main () {
    char ch;
    scanf("%c", &ch);
  if (ch >= 'a' && ch <= 'z') {
        char upperCh = ch - 32; 
        printf("The character in uppercase is: %c\n", upperCh);
    }
    else if (ch >= 'A' && ch <= 'Z') {
        char lowerCh = ch + 32; 
        printf("Lowercase", lowerCh);
    } else {
        printf("Uppercase");
    }

    return 0;
}
