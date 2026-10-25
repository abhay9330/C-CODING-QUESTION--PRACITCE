// Write a C program using nested `if` statements that reads an age. If the age is negative, print `"Invalid age"`. Otherwise, print `"Eligible to vote"` if the age is 18 or older, or `"Not eligible to vote"` if it is under 18.
#include <stdio.h>
int main() {
    int age;
    scanf("%d", &age);

    if (age >= 0) {
        if (age >= 18) {
            printf("Eligible to vote because you are 18 or older.");
        } else {
            printf("Not eligible to vote because you are under 18.");
        }
    } else {
        printf("Invalid age.");
    }

    return 0;
}