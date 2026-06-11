#include <stdio.h>
#include <math.h>
int main(){
    float compoundInterest, principal, rate, time;
    scanf("%f %f %f", &principal, &rate, &time);
    compoundInterest = (principal * pow((1 + rate / 100), time)) - principal;
    printf("%.2f", compoundInterest);
    return 0;
}