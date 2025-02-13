#include <stdio.h>
int main () {
    char alpha;
    scanf("%c", &alpha);
  if (ch >= 'a' && ch <= 'z') {
        char upperCh = ch - 32; 
        printf("The character in uppercase is: %c\n", upperCh);
    }
    else if (ch >= 'A' && ch <= 'Z') {
        char lowerCh = ch + 32; 
        printf("The character in lowercase is: %c\n", lowerCh);
    } else {
        printf("You entered a non-alphabetical character.\n");
    }

    return 0;
}
