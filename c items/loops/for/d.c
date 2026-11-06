#include <stdio.h>
int main() {
    int x, original, r = 0;
    printf("Enter a number: ");
    scanf("%d", &x);
    original = x;
    for(int i=1; i<x ; i++) {
        r = r * 10 + x % 10;
        x = x/ 10;
    }

    if (original == r)
        printf("Palindrome\n");
    else
        printf("Not a palindrome\n");

    return 0;
}