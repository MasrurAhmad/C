#include <stdio.h>
int main(){
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    printf("The sum of %d and %d = %d\n", num1, num2, (num1+num2));
    printf("The subtraction of %d and %d = %d\n", num1, num2, (num1-num2));
    printf("The product of %d and %d = %d\n", num1, num2, (num1*num2));
    printf("The division of %d and %d = %d\n", num1, num2, (num1/num2));
    return 0;
}