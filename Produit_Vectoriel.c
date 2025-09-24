#include <stdio.h>

int main() {
    float A[3], B[3], C[3];
    int i;

    // Lecture du premier vecteur
    printf("Entrez les composantes du vecteur A (a1 a2 a3) : ");
    for (i = 0; i < 3; i++) {
        scanf("%f", &A[i]);
    }

    // Lecture du second vecteur
    printf("Entrez les composantes du vecteur B (b1 b2 b3) : ");
    for (i = 0; i < 3; i++) {
        scanf("%f", &B[i]);
    }

    // Calcul du produit vectoriel
    C[0] = A[1]*B[2] - A[2]*B[1];
    C[1] = A[2]*B[0] - A[0]*B[2];
    C[2] = A[0]*B[1] - A[1]*B[0];

    // Affichage du résultat
    printf("Le produit vectoriel A x B est : (%.2f, %.2f, %.2f)\n", C[0], C[1], C[2]);

    return 0;
}