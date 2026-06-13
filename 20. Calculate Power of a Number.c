#include <stdio.h>
int main() {
    int a, b;
    int power = 1; // Renamed 'sum' to 'power' for clarity
    scanf("%d %d", &a, &b);
    for(int i = 1; i <= b; i++) {
        power = power * a;
    }
    printf("%d\n", power);
    return 0;
}