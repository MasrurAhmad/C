#include <stdio.h>
int main() {
    int a;
    int i, count = 0; // Renamed 'c' to 'count' for clarity
    scanf("%d", &a);
    for(i = 1; i <= a; i++){
        if(a%i==0) count++;
    }
    printf("%s", count==2 ? "Prime" : "Not Prime");
    return 0;
}