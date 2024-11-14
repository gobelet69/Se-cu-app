#include <stdio.h>
#include <stdlib.h>

void entiere(int a, int b, int *quotient, int *reste) {
    *quotient = a / b;
    *reste = a % b;
    return;
}

float reel(int a, int b) {
    return (float) a / b;
}
int main(int argc, char *argv[]) {
    int quotient;
    int reste;
    int a = atoi(argv[1]);
    int b = atoi(argv[2]);
    entiere(a, b, &quotient, &reste);
    float reelint = reel(a, b);
    printf("La division réel est : %f\n", reelint);
    printf("La division entiere: %d %d\n", quotient, reste);
    return 0;
}
