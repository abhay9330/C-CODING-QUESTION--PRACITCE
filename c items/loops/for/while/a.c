// /? find the facotorial of the number 
#include <stdio.h>
int main() {
    int x;
    int num = 1;
    int i = 1;

    scanf("%d", &x);

    while (i <= x) {
        num = num * i;
        i++;
    }

    printf("The factorial of the number is: %d", num);

    return 0;
}

