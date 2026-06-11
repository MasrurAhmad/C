#include <stdio.h>
int main() {
    int length, width, area, perimeter;
    scanf("%d %d", &length, &width);
    area = length*width;
    perimeter = 2*(length+width);
    printf("%d\n%d", area, perimeter);
    return 0;
}