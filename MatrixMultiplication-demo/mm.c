#include <stdio.h>
#include <stdlib.h>
#define N 5000

int main() {
    int a[N][N], i, j, k, b[N][N], ans[N][N];

    // Initialize matrices 'a' and 'b'
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            a[i][j] = 1;
            b[i][j] = 2;
        }
    }

    // Perform matrix multiplication
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            ans[i][j] = 0;
            for (k = 0; k < N; k++) {
                ans[i][j] += a[i][k] * b[k][j];
            }
        }
    }

   /* printf("Resultant Matrix:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%d\t", ans[i][j]);
        }
        printf("\n");
    }*/

    return 0;
}

