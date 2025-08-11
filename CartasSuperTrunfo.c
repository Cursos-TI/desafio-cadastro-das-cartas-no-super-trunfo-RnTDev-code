#include <stdio.h>

struct Carta {
    char CodigoDaCarta[20];
    char NomeDaCidade[25];
    char LetraDoEstado[15];
    char NumeroDaCarta[10];
    unsigned long int populacao; 
    float area;
    float pib;
    int PontosTuristicos;
};

int main() {

    struct Carta carta1;
    struct Carta carta2;

    float densidadePopulacional1, pibPerCapita1, superPoder1;
    float densidadePopulacional2, pibPerCapita2, superPoder2;

    int Carta1VenceuPopulacao, Carta1VenceuArea, Carta1VenceuPIB, Carta1VenceuPontosTuristicos;
    int Carta1VenceuDensidade, Carta1VenceuPIBperCapta, Carta1VenceuSuperPoder;


    printf("--- Cadastro da Primeira Carta ---\n");
    
    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", carta1.CodigoDaCarta);

    printf("Digite o nome da cidade: ");
    scanf("%s", carta1.NomeDaCidade);

    printf("Digite a letra do estado (ex: A): ");
    scanf("%s", carta1.LetraDoEstado);

    printf("Digite o numero da carta (ex: 01): ");
    scanf("%s", carta1.NumeroDaCarta);

    printf("Digite a populacao: ");
    scanf("%lu", &carta1.populacao); 

    printf("Digite a area (em km²): ");
    scanf("%f", &carta1.area);

    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &carta1.pib);

    printf("Digite o numero de Pontos Turisticos: ");
    scanf("%d", &carta1.PontosTuristicos);
    
    printf("\n");

    printf("--- Cadastro da Segunda Carta ---\n");

    printf("Digite o codigo da carta (ex: B04): ");
    scanf("%s", carta2.CodigoDaCarta);

    printf("Digite o nome da cidade: ");
    scanf("%s", carta2.NomeDaCidade);

    printf("Digite a letra do estado (ex: B): ");
    scanf("%s", carta2.LetraDoEstado);

    printf("Digite o numero da carta (ex: 04): ");
    scanf("%s", carta2.NumeroDaCarta);

    printf("Digite a populacao: ");
    scanf("%lu", &carta2.populacao);

    printf("Digite a area (em km²): ");
    scanf("%f", &carta2.area);

    printf("Digite o PIB (em bilhoes): ");
    scanf("%f", &carta2.pib);

    printf("Digite o numero de Pontos Turisticos: ");
    scanf("%d", &carta2.PontosTuristicos);

    densidadePopulacional1 = (float)carta1.populacao / carta1.area;
    pibPerCapita1 = (carta1.pib * 1000000000) / (float)carta1.populacao;
    superPoder1 = (float)carta1.populacao + carta1.area + carta1.pib + (float)carta1.PontosTuristicos + pibPerCapita1 + (1.0 / densidadePopulacional1);

    densidadePopulacional2 = (float)carta2.populacao / carta2.area;
    pibPerCapita2 = (carta2.pib * 1000000000) / (float)carta2.populacao;
    superPoder2 = (float)carta2.populacao + carta2.area + carta2.pib + (float)carta2.PontosTuristicos + pibPerCapita2 + (1.0 / densidadePopulacional2);

    Carta1VenceuPopulacao = carta1.populacao > carta2.populacao;
    Carta1VenceuArea = carta1.area > carta2.area;
    Carta1VenceuPIB = carta1.pib > carta2.pib;
    Carta1VenceuPontosTuristicos = carta1.PontosTuristicos > carta2.PontosTuristicos;
    Carta1VenceuPIBperCapta = pibPerCapita1 > pibPerCapita2;
    Carta1VenceuSuperPoder = superPoder1 > superPoder2;
    Carta1VenceuDensidade = densidadePopulacional1 < densidadePopulacional2;

    printf("\n \n --- Comparacao de Cartas --- \n");
    printf("Populacao: Carta %d venceu (%d) \n", (Carta1VenceuPopulacao ? 1 : 2), Carta1VenceuPopulacao);
    printf("Area: Carta %d venceu (%d) \n", (Carta1VenceuArea ? 1 : 2), Carta1VenceuArea);
    printf("PIB: Carta %d venceu (%d)\n", (Carta1VenceuPIB ? 1 : 2), Carta1VenceuPIB);
    printf("Pontos Turisticos: Carta %d venceu (%d) \n", (Carta1VenceuPontosTuristicos ? 1 : 2), Carta1VenceuPontosTuristicos);
    printf("Densidade Populacional: Carta %d venceu (%d) \n", (Carta1VenceuDensidade ? 1 : 2), Carta1VenceuDensidade);
    printf("PIB per Capita: Carta %d venceu (%d) \n", (Carta1VenceuPIBperCapta ? 1 : 2), Carta1VenceuPIBperCapta);
    printf("Super Poder: Carta %d venceu (%d) \n", (Carta1VenceuSuperPoder ? 1 : 2), Carta1VenceuSuperPoder);

    return 0;
}