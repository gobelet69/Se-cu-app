#include <stdio.h>

int main() {
    int tab[5] = {10, 20, 5, 30, 15}; // Déclaration et initialisation d'un tableau d'entiers
    int n = 5; // Longueur du tableau
    int min = tab[0]; // Initialisation du minimum
    int max = tab[0]; // Initialisation du maximum

    // Recherche du minimum et du maximum
    for (int i = 1; i < n; i++) {
        if (tab[i] < min) {
            min = tab[i];
        }
        if (tab[i] > max) {
            max = tab[i];
        }
    }

    // Affichage des résultats
    printf("Le plus petit nombre est : %d\n", min);
    printf("Le plus grand nombre est : %d\n", max);

    return 0;
}
