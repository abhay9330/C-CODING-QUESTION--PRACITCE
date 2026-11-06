// no is prime or not lets check ir  

#include <stdio.h>
int main() {
    int x, i = 2;
    scanf("%d", &x);
    if (x <= 1)
        printf("not prime");
    else {
        while (i < x) {
        if (x % i == 0)
       break;
            i++;
        }
        if (i == x)
           printf("prime");
        else
            printf("not prime");
    }

    return 0;
}
