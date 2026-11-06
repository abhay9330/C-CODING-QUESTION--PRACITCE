// Write a C program using `switch` that reads two numbers and an operator (`+`, `-`, `*`, or `/`), then prints the result. If the operator is invalid, print `"Invalid operator"`. Also handle division by zero.

#include <stdio.h>
int main() {
    int num, x, y;
    scanf("%d %d %d", &num, &x, &y);

    switch (num) {
        case 1:
            printf("%d", x + y);
            break;
        case 2:
            printf("%d", x - y);
            break;
        case 3:
            printf("%d", x * y);
            break;
        case 4:
            if (y != 0)
                printf("%d", x / y);
            else
                printf("Cannot divide by zero");
            break;
        default:
            printf("Invalid choice");
    }

    return 0;
}