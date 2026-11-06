// summ of all elements of 2d array
#include <stdio.h>
int main() {
int rows, cols;
    scanf("%d %d", &rows, &cols);
    int arr[100][100];
    long long sum = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
            sum = sum + arr[i][j];
    }
    }

    printf("%lld\n", sum);
    return 0;
}