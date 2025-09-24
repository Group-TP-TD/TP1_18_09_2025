#include <stdio.h>

// Fonction pour trier le tableau (méthode simple : tri à bulles)
void trier(int tab[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (tab[j] > tab[j + 1]) {
                temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n, i;
    printf("Entrez le nombre d'elements du tableau : ");
    scanf("%d", &n);

    int tab[n];

    printf("Entrez les %d elements :\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }

    // Trier le tableau
    trier(tab, n);

    // Calcul de la médiane
    float mediane;
    if (n % 2 == 1) { 
        // Si n est impair
        mediane = tab[n / 2];
    } else {
        // Si n est pair
        mediane = (tab[(n / 2) - 1] + tab[n / 2]) / 2.0;
    }

    printf("La mediane du tableau est : %.2f\n", mediane);

    return 0;
}