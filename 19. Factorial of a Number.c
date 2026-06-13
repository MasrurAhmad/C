#include <stdio.h>
int main() {
    int a;
    int factorial = 1; // Renamed 'sum' to 'factorial' for clarity
    scanf("%d", &a);
    for(int i = 1; i <= a; i++) {
        factorial = factorial * i;
    }
    printf("%d\n", factorial);
    return 0;
}