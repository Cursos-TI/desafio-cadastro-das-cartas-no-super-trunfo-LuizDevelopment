#include <stdio.h>

int main(){

// Desafio nivel Aventureiro --> Super Trunfo em C:



// Carta Número 1

    char estado[50];
    char codigo_da_carta[50];
    char nome_da_cidade[50];
    int populacao;
    float area_em_km;
    float pib;
    int numeros_de_pontos_turisticos;
    float densidade_populacao;
    float pib_per_capita;
    float media1 ,media2,media3,media4; 



// Carta Número 2

    char estado2[50];
    char codigo_da_carta2[50];
    char nome_da_cidade2[50];
    int populacao2;
    float area_em_km2;
    float pib2;
    int numeros_de_pontos_turisticos2;
    float densidade_populacao2;
    float pib_per_capita2;

// Dados da Carta 1
      printf("INSIRA OS DADOS DA CIDADE 1 \n");


    printf("Digite sua Estado :");
    scanf("%s", &estado);
    printf("Digite o Código da Carta: ");
    scanf("%s", &codigo_da_carta);
    printf("Digite o nome da sua Cidade: ");
    scanf("%s", &nome_da_cidade);
    printf("Digite o número de pessoas: ");
    scanf("%d", &populacao);
    printf("Digite a Área em KM²: ");
    scanf("%f", &area_em_km);
    printf("Digite o PIB da Cidade: ");
    scanf("%f", &pib);
    printf("Quantidade de Pontos Turísticos na Cidade: ");
    scanf("%d", &numeros_de_pontos_turisticos);

    media1 = (populacao / area_em_km);
    printf("Resultado da Densidade Populacional : %.2f\n", media1);
    media2 = (pib / populacao);
    printf("Resultado PIB per Capita : %.2f\n\n", media2);


    
    printf("DADOS DA CIDADE 1 FINALIZADO!!\n\n\n\n");


// Conclusão dos dados da Carta 1


// ## Dados da Carta 2 ##


    printf("INSIRA OS DADOS DA CIDADE 2 \n\n\n\n");


    printf("Digite o nome do segundo estado:");
    scanf("%s", &estado2);
    printf("Digite o Código da Carta 2: ");
    scanf("%s", &codigo_da_carta2);
    printf("Digite o nome da segunda cidade: ");
    scanf("%s", &nome_da_cidade2);
    printf("Digite o número de pessoas: ");
    scanf("%d", &populacao2);
    printf("Digite a Área em KM²: ");
    scanf("%f", &area_em_km2);
    printf("Digite o PIB da Cidade: ");
    scanf("%f", &pib2);
    printf("Quantidade de Pontos Turísticos na Cidade: ");
    scanf("%d", &numeros_de_pontos_turisticos2);

    media3 = (populacao2 / area_em_km2);
    printf("Resultado da Densidade Populacional : %.2f\n", media3);
    media4 = (pib2 / populacao2);
    printf("Resultado do PIB per Capita : %.2f\n\n", media4);



    printf("DADOS DA CIDADE 2 FINALIZADO!!");

    return 0;





 

}