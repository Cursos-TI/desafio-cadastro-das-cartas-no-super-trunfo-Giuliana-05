#include <stdio.h>

struct Carta {
    char estado;
    char codigo[5];
    char nome[30];
    int populacao;
    float area;
    float pib;
    int numeroPontos;
};

int main() {
    struct Carta carta1, carta2;

    printf("Carta 1:\n");
    printf("Estado: ");
    scanf(" %c", &carta1.estado);
    printf("Código: ");
    scanf("%s", carta1.codigo);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta1.nome);
    printf("População: ");
    scanf("%d", &carta1.populacao);
    printf("Área: ");
    scanf("%f", &carta1.area);
    printf("PIB: ");
    scanf("%f", &carta1.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta1.numeroPontos);

    printf("\nCarta 2:\n");
    printf("Estado: ");
    scanf(" %c", &carta2.estado);
    printf("Código: ");
    scanf("%s", carta2.codigo);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta2.nome);
    printf("População: ");
    scanf("%d", &carta2.populacao);
    printf("Área: ");
    scanf("%f", &carta2.area);
    printf("PIB: ");
    scanf("%f", &carta2.pib);
    printf("Número de pontos turísticos: ");
    scanf("%d", &carta2.numeroPontos);

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nome);
    printf("População: %d\n", carta1.populacao);
    printf("Área: %.2f\n", carta1.area);
    printf("PIB: %.2f bilhões de reais\n", carta1.pib);
    printf("Número de Pontos Turísticos: %d\n", carta1.numeroPontos);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nome);
    printf("População: %d\n", carta2.populacao);
    printf("Área: %.2f\n", carta2.area);
    printf("PIB: %.2f bilhões de reais\n", carta2.pib);
    printf("Número de Pontos Turísticos: %d\n", carta2.numeroPontos);

    return 0;
}
