#include <stdio.h>

int main() {
    int n, m, i, j;

    // Dimensions
    printf("Entrez la taille du vecteur (n) : ");
    scanf("%d", &n);

    printf("Entrez le nombre de colonnes de la matrice (m) : ");
    scanf("%d", &m);

    int V[n];
    int M[n][m];
    int R[m];

    // Lire le vecteur
    printf("Entrez les %d elements du vecteur :\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &V[i]);
    }

    // Lire la matrice
    printf("Entrez les elements de la matrice %d x %d :\n", n, m);
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &M[i][j]);
        }
    }

    // Produit V x M
    for (j = 0; j < m; j++) {
        R[j] = 0;
        for (i = 0; i < n; i++) {
            R[j] += V[i] * M[i][j];
        }
    }

    // Afficher le résultat
    printf("Resultat du produit V x M :\n");
    for (j = 0; j < m; j++) {
        printf("%d ", R[j]);
    }
    printf("\n");

    return 0;
}