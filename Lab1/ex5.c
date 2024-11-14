#include <stdio.h>
#include <math.h>

void surface(double r) {
    double surface = M_PI * r * r;
    printf("La surface du disque de rayon %.2f est %.2f\n", r, surface);
}

int main() {
    double rayon = 5;
    printf("Entrez le rayon du disque: ");
    surface(rayon);
    return 0;
}