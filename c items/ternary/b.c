// Write a C program that reads two integers and uses the ternary operator to print the larger number. If they are equal, print that number.

#include <stdio.h>
int main() {
    int a, b, larger;
    scanf("%d %d", &a, &b);

    larger = (a > b) ? a : b;
    printf("%d", larger);

    return 0;
}