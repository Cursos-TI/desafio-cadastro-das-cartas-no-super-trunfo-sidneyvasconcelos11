#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.


int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char cidade1[30], cidade2[30];
    char estado1[30], estado2[30];
    int populacao1, populacao2;
    int numerosPontosTuristicos1, numerosPontosTuristicos2;
    int codigoCid1, codigoCid2;
    float area1, area2;
    float pib1, pib2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("### Super Trunfo ###\n");
    printf("\n");
   
    //Cadastro da Carta 1

    printf("Carta 1 \n");
    
    printf("Nome do Estado: ");
    scanf("%s \n", &estado1);

    printf ("Codigo da Cidade: ");
    scanf("%d \n", &codigoCid1);

    printf("Nome da Cidade: ");
    scanf("%s \n", &cidade1);

    printf("População: ");
    scanf("%d \n", &populacao1);

    printf("Área: ");
    scanf("%f \n", &area1);

    printf("PIB: ");
    scanf("%f \n", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d \n", &numerosPontosTuristicos1);

    //Cadastro da Carta 2

    printf("Carta 2 \n");
    
    printf("Nome do Estado: ");
    scanf("%s \n", &estado2);

    printf ("Codigo da Cidade: ");
    scanf("%d \n", &codigoCid2);

    printf("Nome da Cidade: ");
    scanf("%s \n", &cidade2);

    printf("População: ");
    scanf("%d \n", &populacao2);

    printf("Área: ");
    scanf("%f \n", &area2);

    printf("PIB: ");
    scanf("%f \n", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d \n", &numerosPontosTuristicos2);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}