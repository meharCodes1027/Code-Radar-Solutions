#include <stdio.h>
int main () {
int a; int b; int c;
scanf(" %d %d %d", &a, &b, &c);
if (a>b){
    print("%d",a);
}
else if (a>c){
    print("%d",a);
}
else if (c>b){
    print("%d",c);
}
else if (c>a){
    print("%d",c);
}
else if (b>a){
    print("%d",b);
}
else if (b>c){
    print("%d",b);
}

return 0;

}