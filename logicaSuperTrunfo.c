#include <stdio.h>
int main () {

char codigoA[20], codigoB[20];
char cidadeA[50], cidadeB[50];
char estadoA[50], estadoB[50];
int populacaoA, populacaoB;
float areaA, areaB, pibA, pibB;

if (populacaoA > populacaoB) {
            printf("A cidade %s tem maior população (%d).\n", cidadeA, populacaoA);
        } else if (populacaoA < populacaoB) {
            printf("A cidade %s tem maior população (%d).\n", cidadeB, populacaoB);
        } else {
            printf("As cidades têm a mesma população (%d).\n", populacaoA);
        }

        // Comparação por área
        if (areaA > areaB) {
            printf("A cidade %s tem uma área maior (%.2f km²).\n", cidadeA, areaA);
        } else if (areaA < areaB) {
            printf("A cidade %s tem uma área maior (%.2f km²).\n", cidadeB, areaB);
        } else {
            printf("As cidades têm a mesma área (%.2f km²).\n", areaA);
        }

        // Comparação por PIB
        if (pibA > pibB) {
            printf("A cidade %s tem um PIB maior (R$ %.2f).\n", cidadeA, pibA);
        } else if (pibA < pibB) {
            printf("A cidade %s tem um PIB maior (R$ %.2f).\n", cidadeB, pibB);
        } else {
            printf("As cidades têm o mesmo PIB (R$ %.2f).\n", pibA);
        }

        return 0;
}
