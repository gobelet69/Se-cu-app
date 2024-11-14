#include <stdio.h>
#include <stdlib.h>

int somme(int a, int b) {
    return a + b;
}

int main(int argc, char *argv[]) {
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    int resultat = somme(a, b);
    printf("La somme est : %d\n", resultat);
    return 0;
}
