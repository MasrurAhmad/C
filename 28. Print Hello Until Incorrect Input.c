#include <stdio.h>
int main() {
    int a;
    scanf("%d", &a);
    while(a == 1) {
        printf("Hello\n");
        scanf("%d", &a);
    }
    return 0;
}