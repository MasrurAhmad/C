#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    while(n!=0){
        int lastdigit=n%10;
        printf("%d\n", lastdigit);
        n/=10;
    }
    return 0;
}