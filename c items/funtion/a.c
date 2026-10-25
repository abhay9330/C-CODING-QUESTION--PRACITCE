#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    return (float)a / b;
}
int main(void) {
    int x, y;
    scanf("%d %d", &x, &y);

    printf("Sum = %d\n", sum(x, y));
    printf("Difference = %d\n", subtract(x, y));
    printf("Product = %d\n", multiply(x, y));

    if (y != 0)
        printf("Division = %.2f\n", divide(x, y));
    else
        printf("Division is undefined\n");

    return 0;
}