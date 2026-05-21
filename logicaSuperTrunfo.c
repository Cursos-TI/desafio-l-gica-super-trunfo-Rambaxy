#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
/* Objetivo: No nível novato você deve criar as cartas representando as cidades 
utilizando scanf para entrada de dados e printf para exibir as informações.*/

int main(){

// Área para definição das variáveis para armazenar as propriedades das cidades

// Área para entrada de dados
   
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
    float inverso1 = 1 / densidade1;

//Variável de SuperPoder carta A;
    float superpoder1 = populacao1 + turismo1 + area1 + pib1 + inverso1 + pibper1;


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
    float inverso2 = 1 / densidade2;

//Variável de SuperPoder carta B; 
        float superpoder2 = populacao2 + turismo2 + area2 + pib2 + inverso2 + pibper2; 

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


        printf("*** COMPARACAO DE CARTAS - ATRIBUTO: POPULACAO ***\n\n");

    //Usando if e else para comparar o valor das cartas e imprimir o a carta vencedora;

            printf("CARTA A - Sao Paulo (SP): \n"); 
            scanf("%lu", &populacao1);
            printf("CARTA B - RIO DE JANEIRO (RJ): \n");
            scanf("%lu", &populacao2);
            if(populacao1 > populacao2){
                printf("CARTA A - SAO PAULO VENCEU!\n\n");
            }else{
                printf("CARTA B - RIO DE JANEIRO VENCEU\n\n");
            }

        printf("*** COMPARACAO DE CARTAS - ATRIBUTO: AREA ***\n\n");

            printf("CARTA A - Sao Paulo (SP): \n"); 
            scanf("%f", &area1); 
            printf("CARTA B - RIO DE JANEIRO (RJ): \n");
            scanf("%f", &area2);
            if(area1 > area2){
                printf("CARTA A - SAO PAULO VENCEU!\n\n");
            }else{
                printf("CARTA B - RIO DE JANEIRO VENCEU!\n\n");
            }

            printf("*** COMPARACAO DE CARTAS - ATRIBUTO: PIB ***\n\n");

            printf("CARTA A - Sao Paulo (SP): \n"); 
            scanf("%f", &pib1); 
            printf("CARTA B - RIO DE JANEIRO (RJ): \n");
            scanf("%f", &pib2);
            if(pib1 > pib2){
                printf("CARTA A - SAO PAULO VENCEU!\n\n");
            }else{
                printf("CARTA B - RIO DE JANEIRO VENCEU!\n\n");
            }

            printf("*** COMPARACAO DE CARTAS - ATRIBUTO: PONTOS TURISTICOS ***\n\n");

            printf("CARTA A - Sao Paulo (SP): \n"); 
            scanf("%d", &turismo1); 
            printf("CARTA B - RIO DE JANEIRO (RJ): \n");
            scanf("%d", &turismo2);
            if(turismo1 > turismo2){
                printf("CARTA A - SAO PAULO VENCEU!\n\n");
            }else{
                printf("CARTA B - RIO DE JANEIRO VENCEU!\n\n");
            }

            printf("*** COMPARACAO DE CARTAS - ATRIBUTO: DENSIDADE POPULACIONAL ***\n\n");

            printf("CARTA A - Sao Paulo (SP): \n"); 
            scanf("%f", &densidade1); 
            printf("CARTA B - RIO DE JANEIRO (RJ): \n");
            scanf("%f", &densidade2);
            if(inverso1 > inverso2){
                printf("CARTA A - SAO PAULO VENCEU!\n\n");
            }else{
                printf("CARTA B - RIO DE JANEIRO VENCEU!\n\n");
            }

            printf("*** COMPARACAO DE CARTAS - ATRIBUTO: PIB PER CAPITA ***\n\n");

            printf("CARTA A - Sao Paulo (SP): \n"); 
            scanf("%f", &pibper1); 
            printf("CARTA B - RIO DE JANEIRO (RJ): \n");
            scanf("%f", &pibper2);
            if(pibper1 > pibper2){
                printf("CARTA A - SAO PAULO VENCEU!\n\n");
            }else{
                printf("CARTA B - RIO DE JANEIRO VENCEU!\n\n");
            }

            printf("*** COMPARACAO DE CARTAS - ATRIBUTO: SUPERPODER!!! ***\n\n");

            printf("CARTA A - Sao Paulo (SP): \n"); 
            scanf("%f", &superpoder1); 
            printf("CARTA B - RIO DE JANEIRO (RJ): \n");
            scanf("%f", &superpoder2);
            if(superpoder1 > superpoder2){
                printf("CARTA A - SAO PAULO VENCEU!\n\n");
            }else{
                printf("CARTA B - RIO DE JANEIRO VENCEU!\n\n");
            }


    return 0;
}
