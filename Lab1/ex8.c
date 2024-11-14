//Un programme qui affiche "Hello x!", où x est une chaîne de caractères passée en
//argument au programme. Écrivez votre fonction principale avec les paramètres argc et
//argv. (Ex : ./hello toto)
#include <stdio.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <name>\n", argv[0]);
        return 1;
    }
    printf("Hello %s!\n", argv[1]);
    return 0;
}