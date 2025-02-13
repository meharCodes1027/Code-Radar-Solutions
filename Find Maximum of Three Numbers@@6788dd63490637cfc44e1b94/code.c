#include <stdio.h>
int main () {
int a; int b; int c;
scanf(" %d %d %d", &a, &b, &c);
if (a>b){
    printf("%d",a);
}
else if (a>c){
    printf("%d",a);
}
else if (c>b){
    printf("%d",c);
}
else if (c>a){
    printf("%d",c);
}
else if (b>a){
    printf("%d",b);
}
else if (b>c){
    printf("%d",b);
}
else if (a==b==c){
    printf("%d",a);
}
return 0;

}