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

    // Novas variáveis para armazenar os resultados dos cálculos
    // aqui fiquei na duvida se eu deveria adicionaria junto das outras variaveis na struct e fui pesquisar pra entender e aprender
    // aprendi sobre dados fontes e dados calculados ;)
    float densidadePopulacional1, pibPerCapita1;
    float densidadePopulacional2, pibPerCapita2;
     
    //quis deixar mais legal usando o '*' (aprendi com o prof Sergio).
    printf(" *** Cadastro da Primeira Carta ***  \n");
    
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

    // Aqui os calculos da carta 1
    densidadePopulacional1 = (float)carta1.populacao / carta1.area;
    pibPerCapita1 = (carta1.pib * 1000000000) / (float)carta1.populacao; // Convertendo PIB para valor real (bati cabeça pra entender e aprender isso aqui ;( )
    
    printf(" \n");

    printf(" *** Cadastro da Segunda Carta ***  \n");

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

      // Aqui os calculos da carta 2
    densidadePopulacional2 = (float)carta2.populacao / carta2.area;
    pibPerCapita2 = (carta2.pib * 1000000000) / (float)carta2.populacao; 

    //quis deixar mais legal usando o '=' (aprendi com o prof Sergio).
    printf(" \n ====Dados da Primeira Carta==== \n");
    printf("Codigo da Carta: %s \n", carta1.CodigoDaCarta);
    printf("Nome da Cidade: %s \n", carta1.NomeDaCidade);
    printf("Populacao: %d habitantes \n", carta1.populacao);
    printf("Area: %.2f km² \n", carta1.area);
    printf("PIB: R$ %.2f bilhoes \n", carta1.pib);
    printf("Pontos Turisticos: %d \n", carta1.pontos_turisticos);

    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita1);

    printf(" \n ==== Dados da Segunda Carta ==== \n");
    printf("Codigo da Carta: %s \n", carta2.CodigoDaCarta);
    printf("Nome da Cidade: %s \n", carta2.NomeDaCidade);
    printf("Populacao: %d habitantes \n", carta2.populacao);
    printf("Area: %.2f km² \n", carta2.area);
    printf("PIB: R$ %.2f bilhoes \n", carta2.pib);
    printf("Pontos Turisticos: %d \n", carta2.pontos_turisticos);

    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: R$ %.2f\n", pibPerCapita2);

    return 0;
}
