#include <stdio.h>

int main() {
    int a, b, c;
    float average;  // Declare the 'average' variable

    // Input the three integers
    printf("Enter the first integer: ");
    scanf("%d", &a);
    
    printf("Enter the second integer: ");
    scanf("%d", &b);

    printf("Enter the third integer: ");
    scanf("%d", &c);

    // Calculate the average
    average = (a + b + c) / 3.0;

    // Print the average
    printf("Average: %.2f\n", average);

    return 0;
}
