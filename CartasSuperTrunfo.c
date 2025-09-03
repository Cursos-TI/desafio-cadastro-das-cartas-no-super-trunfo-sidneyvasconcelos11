#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char cidade1[30], cidade2[30];
    char estado1[30], estado2[30];
    int populacao1, populacao2;
    int numerosPontosTuristicos1, numerosPontosTuristicos2;
    char codigoCid1[30], codigoCid2[30];
    float area1, area2;
    float pib1, pib2;
    float pibPerCapita1, pibPerCapita2;
    float densidadePopulacional1, densidadePopulacional2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("##### S u p e r   T r u n f o #####\n");
    printf("\n");
   
    //Cadastro da Carta 1
    printf("Carta 1 \n");
    
    printf("Nome do Estado: \n");
    scanf("%s", &estado1);

    printf ("Codigo da Cidade: \n");
    scanf("%s", &codigoCid1);

    printf("Nome da Cidade: \n");
    scanf("%s", &cidade1);

    printf("População: \n");
    scanf("%d", &populacao1);

    printf("Área: \n");
    scanf("%f", &area1);

    printf("PIB: \n");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &numerosPontosTuristicos1);
    //--------------------------------------- Fim Cadastro da Carta 1

    printf("\n");
   
    //Cadastro da Carta 2
    printf("\n");

    printf("Carta 2 \n");
    
    printf("Nome do Estado: \n");
    scanf("%s", &estado2);

    printf ("Codigo da Cidade: \n");
    scanf("%s", &codigoCid2);

    printf("Nome da Cidade: \n");
    scanf("%s", &cidade2);

    printf("População: \n");
    scanf("%d", &populacao2);

    printf("Área: \n");
    scanf("%f", &area2);

    printf("PIB: \n");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &numerosPontosTuristicos2);
    //--------------------------------------- Fim Cadastro da Carta 2

    // Exibição dos Dados das Carta 1
    printf("## Carta 1 ##\n");
    printf("\n");
    printf("Nome do Estado: %s \n", estado1);
    printf ("Codigo da Cidade: %s \n", codigoCid1);
    printf("Nome da Cidade: %s \n", cidade1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f \n", pib1);
    printf("Número de Pontos Turísticos: %d \n", numerosPontosTuristicos1);

    //Calculo da Densidade e Pib per Capita (Carta 1)
    densidadePopulacional1 = (float) (populacao1 / area1);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePopulacional1);

    pibPerCapita1 = (float) (pib1 / populacao1);
    printf("PIB per Capita: %.2f\n", pibPerCapita1);
    printf("\n");
    printf("\n");
    //--------------------------------------- Fim Calculo

    //Exibição dos Dados da Carta 2
    printf("## Carta 2 ##\n");
    printf("\n");
    printf("Nome do Estado: %s \n", estado2);
    printf ("Codigo da Cidade: %s \n", codigoCid2);
    printf("Nome da Cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", numerosPontosTuristicos2);

    //Calculo da Densidade e Pib per Capita (Carta 2)
    densidadePopulacional2 = (float) (populacao2 / area2);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidadePopulacional2);

    pibPerCapita2 = (float) (pib2 / populacao2);
    printf("PIB per Capita: %.2f\n", pibPerCapita2);
    printf("\n");
    printf("\n");
    //--------------------------------------- Fim Calculo

    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}