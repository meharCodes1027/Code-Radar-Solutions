#include <stdio.h>
#include <math.h> 
int main() {
    float radius, area;
    scanf("%f", &radius);
    area = M_PI * radius * radius;  
    printf("Area: %.2f\n", radius, area);
    return 0;
}
