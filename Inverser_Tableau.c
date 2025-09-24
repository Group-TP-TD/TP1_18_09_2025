#include <stdio.h>

int main() {
    int n, i;

    // Lire la taille du tableau
    printf("Entrez le nombre d'elements du tableau : ");
    scanf("%d", &n);

    int tab[n];

    // Lire les éléments du tableau
    printf("Entrez les %d elements :\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }

    // Inverser le tableau
    for (i = 0; i < n / 2; i++) {
        int temp = tab[i];
        tab[i] = tab[n - 1 - i];
        tab[n - 1 - i] = temp;
    }

    // Afficher le tableau inversé
    printf("Tableau inverse :\n");
    for (i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}