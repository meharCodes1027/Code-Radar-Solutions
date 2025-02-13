#include <stdio.h>
int main() {
    int marks;
    scanf("%d", marks);
    if (A >= 90){
        printf(":A");
    }
    else if (B >= 80 && <90){
        printf(":B");
    }
    else if (C >= 70 && <80){
        printf(":C");
    }
    else if (D >= 60 && <70){
        printf(":D");
    }
    else if (F <60){
        printf(":F");
    }
    return 0;
}