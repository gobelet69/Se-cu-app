#include <stdio.h>

void countCharacterOccurrences(const char *str, char caractere) {
    int count = 0;
    while (*str) {
        if (*str == caractere) {
            count++;
        }
        str++;
    }
    printf("Le caractère '%c' apparaît %d fois dans la chaîne.\n", caractere, count);
}

int main() {
    const char *chaine = "Bonjour, comment ça va ?";
    char caractere = 'o';
    countCharacterOccurrences(chaine, caractere);
    return 0;
}