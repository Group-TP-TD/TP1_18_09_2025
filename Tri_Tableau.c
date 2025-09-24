#include <stdio.h>

int main() {
    int n, i, trie = 1;

    // Lire la taille du tableau
    printf("Entrez le nombre d'elements du tableau : ");
    scanf("%d", &n);

    int tab[n];

    // Lire les éléments du tableau
    printf("Entrez les %d elements :\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }

    // Vérifier si le tableau est trié
    for (i = 0; i < n - 1; i++) {
        if (tab[i] > tab[i + 1]) {
            trie = 0; // dès qu’on trouve une incohérence
            break;
        }
    }

    if (trie)
        printf("Le tableau est trie en ordre croissant.\n");
    else
        printf("Le tableau n'est pas trie.\n");

    return 0;
}