#include <stdio.h>

int main() {
    float a, b, c;
    
    // Read the sides of the triangle
    scanf("%f %f %f", &a, &b, &c);
    
    // Check if it's a valid triangle
    if (a + b > c && a + c > b && b + c > a)
        printf("Valid\n");
    else
        printf("Invalid\n");
    
    return 0;
}










}