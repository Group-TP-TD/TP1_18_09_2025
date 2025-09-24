#include <stdio.h>

int main() {
    int n, i, element, found = 0;

    // Lire la taille du tableau
    printf("Entrez le nombre d'elements du tableau : ");
    scanf("%d", &n);

    int tab[n];

    // Lire les éléments du tableau
    printf("Entrez les %d elements :\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }

    // Lire l'élément à rechercher
    printf("Entrez l'element a rechercher : ");
    scanf("%d", &element);

    // Recherche séquentielle
    for (i = 0; i < n; i++) {
        if (tab[i] == element) {
            printf("Element %d trouve a la position %d.\n", element, i + 1);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Element %d non trouve dans le tableau.\n", element);
    }

    return 0;
}