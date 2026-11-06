// Write a C program using nested `if` statements to read an integer. If it is negative, print `"Negative"`. Otherwise, use an inner `if` to print whether it is even or odd. Include the number in the output.
#include <stdio.h>
int main() {
    int number;
    scanf("%d", &number);

    if (number < 0) {
        printf("%d is Negative", number);
    } else {
        if (number % 2 == 0) {
            printf("%d is Even", number);
        } else {
            printf("%d is Odd", number);
        }
    }

    return 0;
}