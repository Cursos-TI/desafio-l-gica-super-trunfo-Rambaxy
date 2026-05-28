#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
/* Objetivo: No nível novato você deve criar as cartas representando as cidades 
utilizando scanf para entrada de dados e printf para exibir as informações.*/

int main(){

// Área para definição das variáveis para armazenar as propriedades das cidades

// Área para entrada de dados
   int opcao;
// Variáveis carta 1
    char estado1 = 'A';
    char codigo1[10] = "A01";
    char cidade1[50] = "Sao Paulo" ;
    unsigned long int populacao1 = 12325000;
    int turismo1 = 50;
    float area1 = 1521.11 ;
    float pib1 = 699.28 ;


// Variáveis carta 2//
    char estado2 = 'B';
    char codigo2[10] = "B02";
    char cidade2[50] = "Rio de Janeiro" ;
    unsigned long int populacao2 = 6748000;
    int turismo2 = 30;
    float area2 = 1200.25;
    float pib2 = 300.50;

// Desafio aventureiro: calcular a densidade e o pib per capta para exibir nas cartas;
   float densidade1 = populacao1 / area1; 
   float pibper1 = (pib1 * 1000000000) / populacao1;

    //definindo os valores do inverso populacional em variáveis;
    //float inverso1 = 1 / densidade1;

//Variável de SuperPoder carta A;
    float superpoder1 = populacao1 + turismo1 + area1 + pib1 + densidade1 + pibper1;

printf("### SUPER TRUNFO ###\n\n");


// Área para exibição dos dados da cidade
// Carta 1//

    printf("*** CARTA 1 ***\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Numeros de pontos turisticos: %d\n", turismo1);
    printf("Area: %.2f Km\n", area1);
    printf("PIB: R$ %.2f bilhoes de reais\n", pib1);
    printf("Densidade populacional: %.2f hab/km\n", densidade1);
    printf("PIB per capita: %.2f reais\n", pibper1);
    printf("SUPERPODER: %.0f\n\n", superpoder1);


// Desafio aventureiro: calcular a densidade e o pib per capta para exibir nas cartas;
    float densidade2 = populacao2 / area2;
    float pibper2 = (pib2 * 1000000000) / populacao2;

    //definindo os valores do inverso populacional em variáveis;
    //float inverso2 = 1 / densidade2;

//Variável de SuperPoder carta B; 
        float superpoder2 = populacao2 + turismo2 + area2 + pib2 + densidade2 + pibper2; 

    // Carta 2//
    printf("*** CARTA 2 ***\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("populacao: %lu\n", populacao2);
    printf("Numeros de pontos turisticos: %d\n", turismo2);
    printf("Area: %.2f Km\n", area2);
    printf("PIB: R$ %.2f bilhoes de reais\n", pib2);
    printf("Densidade populacional: %.2f hab/km\n", densidade2);
    printf("PIB per capita: %.2f reais\n", pibper2);
    printf("SUPERPODER: %.0f\n\n", superpoder2);


    printf("Escolha um atributo para comparar: \n\n");
    printf("1 - Populacao\n");
    printf("2 - Pontos turisticos\n");
    printf("3 - Area\n");
    printf("4 - PIB\n");
    printf("5 - Densidade populacional\n");
    printf("6 - PIB per Capita\n");
    printf("7 - SUPERPODER\n");
    scanf("%d", &opcao);

    /*Aqui no switch eu crio um menu e defino uma variavel de nome opção para dar nome ou números as 
    opçoes que o jogador vai poder inserir, os números que ficam dentro do CASE são referentes as opções do
    menu exibido para o jogador no printf acima*/
    switch (opcao){

        case 1:

        printf("\nComparacao da POPULACAO\n\n");

        printf("%s: %lu habitantes\n", cidade1, populacao1);
        printf("%s: %lu habitantes\n", cidade2, populacao2);

        if(populacao1 > populacao2){
            printf("\n%s VENCEU!!!\n", cidade1);
        }else if(populacao1 < populacao2){
            printf("\n%s VENCEU!!!\n", cidade2);
        }else{
            printf("EMPATE!!!\n");
        }

        break;

        case 2:

        printf("\nComparacao de PONTOS TURISTICOS\n\n");

        printf("%s: %d pontos turisticos\n", cidade1, turismo1);
        printf("%s: %d pontos turisticos\n", cidade2, turismo2);

        if(turismo1 > turismo2){
            printf("\n%s VENCEU!!!\n", cidade1);
        }else if(turismo1 < turismo2){
            printf("\n%s VENCEU!!!\n", cidade2);
        }else{
            printf("EMPATE!!!\n");
        }
        break;

        case 3:

        printf("\nComparacao de AREA\n\n");

        printf("%s: %fKm\n", cidade1, area1);
        printf("%s: %fkm\n", cidade2, area2);

        if(area1 > area2){
            printf("\n%s VENCEU!!!\n",cidade1);
        }else if(area1 < area2){
            printf("\n%s VENCEU!!!\n",cidade2);
        }else{
            printf("EMPATE!!!\n");
        }
        break;

        case 4:

        printf("\nCOMPARACAO DO PIB\n\n");

        printf("%s: R$%.2f Milhoes\n", cidade1, pib1);
        printf("%s: R$%.2f Milhoes\n", cidade2, pib2);

        if(pib1 > pib2){
            printf("\n%s VENCEU!!!\n", cidade1);
        }else if(pib1 < pib2){
            printf("\n%s VENCEU!!\n", cidade2);
        }else{
            printf("EMPATE!!!\n");
        }
        break;

        case 5:

        printf("\nCOMPARACAO DA DENSIDADE POPULACIONAL\n\n");

        printf("%s: %.2f hab/km\n", cidade1, densidade1);
        printf("%s: %.2f hab/km\n", cidade2, densidade2);

        if(densidade1 < densidade2){
            printf("\n%s VENCEU!!!\n", cidade1);
        }else if(densidade2 < densidade1){
            printf("\n%s VENCEU\n", cidade2);
        }else{
            printf("EMPATE!!!\n");
        }
        break;

        case 6:

        printf("\n COMPARACAO DO PIB PER CAPITA\n\n");
        
        printf("%s: R$%.2f\n", cidade1, pibper1);
        printf("%s: R$%.2f\n", cidade2, pibper2);

        if(pibper1 > pibper2){
            printf("\n%s VENCEU!!!\n", cidade1);
        }else if(pibper1 < pibper2){
            printf("\n%s VENCEU!!!\n", cidade2);
        }else{
            printf("EMPATE!!!\n");
        }
        break;

        case 7:

        printf("\nSUPERPODER!!!\n\n");

        printf("%s: %.0f\n", cidade1, superpoder1);
        printf("%s: %.0f\n", cidade2, superpoder2);

        if(superpoder1 > superpoder2){
            printf("\n%s VENCEU!!!\n", cidade1);
        }else if(superpoder2 > superpoder1){
            printf("\n%s VENCEU!!!\n", cidade2);
        }else{
            printf("EMPATE\n");
        }
        break;

        default:
        printf("Opcao invalida");
    }

    return 0;
}