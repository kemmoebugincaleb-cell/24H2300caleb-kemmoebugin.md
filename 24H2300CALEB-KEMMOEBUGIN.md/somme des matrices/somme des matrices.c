 #include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n, p;
    printf("Donner le nombre de lignes de la matrice A: ");
    scanf("%d", &m);
    printf("Donner le nombre de colonnes de la matrice A (et lignes de la matrice B): ");
    scanf("%d", &n);
    printf("Donner le nombre de colonnes de la matrice B: ");
    scanf("%d", &p);
    int A[m][n], B[n][p], C[m][p];
    printf("\nEntrer les elements de la matrice A (%dx%d):\n", m, n);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        };
    };
    printf("\nEntrer les elements de la matrice B (%dx%d):\n", n, p);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++) {
            scanf("%d", &B[i][j]);
        };
    };
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            C[i][j] = 0;
            for (int k = 0; k < n; k++) {
                C[i][j] += A[i][k] + B[k][j];
            };
        };
    };
    printf("\nsomme A + B = \n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < p; j++) {
            printf("%5d ", C[i][j]);
        };
        printf("\n");
    };

    return 0;
};

