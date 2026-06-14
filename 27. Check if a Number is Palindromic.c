#include <stdio.h>
int main() {
    int n;
    int reversedNumber = 0; // Renamed 'rev' to 'reversedNumber' for clarity
    scanf("%d", &n);
    int originalNumber = n; // Renamed 'copy' to 'originalNumber' for clarity
    while(n > 0){
        int lastDigit = n % 10; // Renamed 'a' to 'lastDigit' for clarity
        reversedNumber = reversedNumber * 10 + lastDigit;
        n /= 10;
    }
    printf(reversedNumber == originalNumber ? "Palindromic number" : "Not a Palindromic number");
    return 0;
}