#include <stdio.h>

int main() {
    int a, b;
    printf("Entrez deux entiers positifs a et b : ");
    scanf("%d %d", &a, &b);

    int produit = 0;   // résultat du produit
    int i, j;

    // On ajoute "a" à produit "b" fois, mais uniquement avec +1
    for (i = 0; i < b; i++) {
        for (j = 0; j < a; j++) {
            produit = produit + 1;  // incrémentation simple
        }
    }

    printf("Le produit de %d et %d est : %d\n", a, b, produit);
    return 0;
}