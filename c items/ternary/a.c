// Write a C program that reads an integer and uses the ternary operator to print `"Even"` if it is divisible by 2; otherwise, print `"Odd"`.
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    (n % 2 == 0) ? printf("Even") : printf("Odd");
    return 0;
}