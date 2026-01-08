#include <stdio.h>

void transpose(int r, int c, int a[r][c]) {
    int t[10][10]; // or int t[c][r]; if you like VLAs

    // compute transpose
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            t[j][i] = a[i][j];

    printf("\nTranspose:\n");
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++)
            printf("%d ", t[i][j]);
        printf("\n");
    }
}

int main() {
    int c1, c2, r1, r2;

    printf("enter A matrix rows and column: ");
    scanf("%d %d", &r1, &c1);

    printf("enter B matrix rows and column: ");
    scanf("%d %d", &r2, &c2);

    if (c1 != r2) {
        printf("multiplication not possible\n");
        return 0;  // stop here if you really care about multiplication
    }

    int A[r1][c1], B[r2][c2];

    printf("enter matrix A:\n");
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            scanf("%d", &A[i][j]);

    printf("enter matrix B:\n");
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            scanf("%d", &B[i][j]);

    printf("\n");
    transpose(r1, c1, A);
    printf("\n");
    transpose(r2, c2, B);

    return 0;
}
