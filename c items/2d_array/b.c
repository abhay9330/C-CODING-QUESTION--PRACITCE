// sum of the diagonals
#include <stdio.h>
int main() {
    int n;
    long long d1 = 0, d2 = 0;
    scanf("%d", &n);
    int arr[100][100];
    for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++)
    scanf("%d", &arr[i][j]);
    }
    for (int i = 0; i < n; i++) {
        d1 = d1 + arr[i][i];          /* main diagonal */
        d2 = d2 + arr[i][n - 1 - i];  /* secondary diagonal */
    }
    printf("%lld %lld\n", d1, d2);
    return 0;
}