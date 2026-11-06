// no is prime or not lets check ir  
#include<stdio.h>
int main() {
    int x;
    int i;
    scanf("%d", &x);
    if (x <= 1) {
        printf("not prime");
    } else {
    for (i = 2; i < x; i++) {
     if (x % i == 0) {
          break;
            }
        }
        if (i == x) {
            printf("prime");
        } else {
            printf("not prime");
        }
    }

    return 0;
}
