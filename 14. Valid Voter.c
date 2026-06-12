#include <stdio.h>

int main() {
    int age;
    char name[50];
    scanf("%d %s", &age, name);
    if(age >= 18){
        printf("%s is a valid voter.\n", name);
    } else {
        printf("%s is not a valid voter.\n", name);
    }
    
    return 0;
}