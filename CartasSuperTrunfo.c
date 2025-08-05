#include <stdio.h>

struct Carta {
    char CodigoDaCarta[20];
    char NomeDaCidade[25];
    char LetraDoEstado[15];
    char NumeroDaCarta[10];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
};

int main() {

    struct Carta carta1;
    struct Carta carta2;

    printf(" Cadastro da Primeira Carta  \n");
    
    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", carta1.CodigoDaCarta);

    printf("Digite o nome da cidade: ");
    scanf("%s", carta1.NomeDaCidade);

    printf("Digite a letra do estado (ex: A): ");
    scanf("%s", carta1.LetraDoEstado);

    printf("Digite o numero da carta (ex: 01): ");
    scanf("%s", carta1.NumeroDaCarta);

    printf("Digite a populacao: ");
    scanf("%d", &carta1.populacao);

    printf("Digite a area (em km²): ");
    scanf("%f", &carta1.area);

    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &carta1.pib);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &carta1.pontos_turisticos);
    
    printf(" \n");

    printf(" Cadastro da Segunda Carta  \n");

    printf("Digite o codigo da carta (ex: B04): ");
    scanf("%s", carta2.CodigoDaCarta);

    printf("Digite o nome da cidade: ");
    scanf("%s", carta2.NomeDaCidade);

    printf("Digite a letra do estado (ex: B): ");
    scanf("%s", carta2.LetraDoEstado);

    printf("Digite o numero da carta (ex: 04): ");
    scanf("%s", carta2.NumeroDaCarta);

    printf("Digite a populacao: ");
    scanf("%d", &carta2.populacao);

    printf("Digite a area (em km²): ");
    scanf("%f", &carta2.area);

    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &carta2.pib);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &carta2.pontos_turisticos);

    printf(" \n Dados da Primeira Carta \n");
    printf("Codigo da Carta: %s \n", carta1.CodigoDaCarta);
    printf("Nome da Cidade: %s \n", carta1.NomeDaCidade);
    printf("Populacao: %d habitantes \n", carta1.populacao);
    printf("Area: %.2f km² \n", carta1.area);
    printf("PIB: R$ %.2f bilhoes \n", carta1.pib);
    printf("Pontos Turisticos: %d \n", carta1.pontos_turisticos);

    printf(" \n Dados da Segunda Carta \n");
    printf("Codigo da Carta: %s \n", carta2.CodigoDaCarta);
    printf("Nome da Cidade: %s \n", carta2.NomeDaCidade);
    printf("Populacao: %d habitantes \n", carta2.populacao);
    printf("Area: %.2f km² \n", carta2.area);
    printf("PIB: R$ %.2f bilhoes \n", carta2.pib);
    printf("Pontos Turisticos: %d \n", carta2.pontos_turisticos);

    return 0;
}
