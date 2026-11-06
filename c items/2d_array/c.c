// sum of 2 matrices
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int a[100][100], b[100][100], c[100][100];
    // a ko input se bharna
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    // b ko input se bharna
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    // a aur b ko jodkar c banana
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    // c ko print karna
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    return 0;
}


// #include <stdio.h>

// int main() {
//     int n = 3;

//     int a[3][3] = {
//         {1, 2, 3},
//         {4, 5, 6},
//         {7, 8, 9}
//     };

//     int b[3][3] = {
//         {9, 8, 7},
//         {6, 5, 4},
//         {3, 2, 1}
//     };

//     int c[3][3];

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             c[i][j] = a[i][j] + b[i][j];
//             printf("%d ", c[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }