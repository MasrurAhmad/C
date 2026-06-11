#include <stdio.h>
#include <math.h>
int main() {
    float area, circumference, radius;
    scanf("%f\n",&radius);
    area = 3.1416 * radius * radius;
    circumference = 2 * 3.1416 * radius;
    printf("Area: %.2f, Perimeter: %.2f", area, circumference);
    return 0;
}