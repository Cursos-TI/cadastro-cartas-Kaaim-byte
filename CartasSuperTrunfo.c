#include <stdio.h>

int main() {
    int opcaojogador;
    // Variáveis da Carta 1
    char Estado1;
    char Codigo_da_Carta1[20];
    char Nome_da_Cidade1[50];
    int Populacao1;
    float area1;
    float PIB1;
    int Numero_de_pontos_turisticos1;
    float Densidade_Populacional1;
    float PIB_per_capita1;
    float Super_Poder1;

    // Variáveis da Carta 2
    char Estado2;
    char Codigo_da_Carta2[20];
    char Nome_da_Cidade2[50];
    int Populacao2;
    float area2;
    float PIB2;
    int Numero_de_pontos_turisticos2;
    float Densidade_Populacional2;
    float PIB_per_capita2;
    float Super_Poder2;

    // ---- Entrada de dados da Carta 1 ----
    printf("Digite a baixo os dados da sua primeira carta:\n");
    printf("Qual o estado da sua cidade?\n");
    scanf(" %c", &Estado1);
    printf("Qual o codigo da sua cidade?\n");
    scanf(" %s", Codigo_da_Carta1);
    printf("Qual o nome da sua cidade?\n");
    scanf(" %s", Nome_da_Cidade1);
    printf("Qual a populacao da sua cidade?\n");
    scanf(" %i", &Populacao1);
    printf("Qual a area da sua cidade? \n");
    scanf(" %f", &area1);
    printf("Qual o PIB da sua cidade?\n");
    scanf(" %f", &PIB1);
    printf("Quantos pontos turisticos existem na sua cidade?\n");
    scanf(" %i", &Numero_de_pontos_turisticos1);
    // ---- Fim dos dados da Carta 1 ----
    // Cálculos da Carta 1
    Densidade_Populacional1 = Populacao1 / area1;
    PIB_per_capita1 = PIB1 / Populacao1;
    Super_Poder1 = Populacao1 + area1 + PIB1 + Numero_de_pontos_turisticos1 + PIB_per_capita1 + Densidade_Populacional1;

    // ---- Entrada de dados da Carta 2 ----
    printf("\nDigite abaixo os dados da sua segunda carta:\n");
    printf("Qual o estado da sua cidade?\n");
    scanf(" %c", &Estado2);
    printf("Qual o codigo da sua cidade?\n");
    scanf(" %s", Codigo_da_Carta2);
    printf("Qual o nome da sua cidade?\n");
    scanf(" %s", Nome_da_Cidade2);
    printf("Qual a populacao da sua cidade?\n");
    scanf(" %i", &Populacao2);
    printf("Qual a area da sua cidade?\n");
    scanf(" %f", &area2);
    printf("Qual o PIB da sua cidade?\n");
    scanf(" %f", &PIB2);
    printf("Quantos pontos turisticos existem na sua cidade?\n");
    scanf(" %i", &Numero_de_pontos_turisticos2);
    // ---- Fim dos dados da carta 2 ----
    // Cálculos da Carta 2
    Densidade_Populacional2 = Populacao2 / area2;
    PIB_per_capita2 = PIB2 / Populacao2;
    Super_Poder2 = Populacao2 + area2 + PIB2 + Numero_de_pontos_turisticos2 + PIB_per_capita2 + Densidade_Populacional2;
   
    printf("Segue os dados das cartas 1 e 2:\n\n");

    printf("Segue os dados da Carta 1:\n\n");

    printf("O estado da Carta 1 e: %c\n", Estado1);
    printf("O codigo da Carta 1 e: %s\n", Codigo_da_Carta1);
    printf("O nome da Carta 1 e: %s\n", Nome_da_Cidade1);
    printf("A populacao da Carta 1 e: %i\n", Populacao1);
    printf("A area da Carta 1 e %f\n", area1);
    printf("O PIB da Carta 1 e: %f\n", PIB1);
    printf("existem %i pontos turisticos na Carta 1\n", Numero_de_pontos_turisticos1);
    printf("O PIB per Capita da Carta 1 e: %f\n", PIB_per_capita1);
    printf("A densidade populacional da Carta 1 e: %f\n", Densidade_Populacional1);
    printf("O Super poder da Carta 1 e: %f\n\n", Super_Poder1);

    printf("Segue os dados da Carta 2:\n\n");

    printf("O estado da Carta 2 e: %c\n", Estado2);
    printf("O codigo da Carta 2 e: %s\n", Codigo_da_Carta2);
    printf("O nome da Carta 2 e: %s\n", Nome_da_Cidade2);
    printf("A populacao da Carta 2 e: %i\n", Populacao2);
    printf("A area da Carta 2 e %f\n", area2);
    printf("O PIB da Carta 2 e: %f\n", PIB2);
    printf("existem %i pontos turisticos na Carta 2\n", Numero_de_pontos_turisticos2);
    printf("O PIB per Capita da Carta 2 e: %f\n", PIB_per_capita2);
    printf("A densidade populacional da Carta 2 e: %f\n", Densidade_Populacional2);
    printf("O Super poder da Carta 2 e: %f\n", Super_Poder2);


        // Inicio das comparacoes para determinar carta vencedora
    printf("Vamos ver qual carta venceu?\n\n");
    
    printf("Escolha qual trunfo vc deseja usar:  \n");
    printf("1. Eu desejo usar populacao! \n");
    printf("2. Eu desejo usar Area! \n");
    printf("3. Eu desejo usar PIB! \n");
    printf("4. Eu desejo usar Densidade Populacional! \n");
    printf("5. Eu desejo usar PIB per Capita! \n");
    scanf("%d", &opcaojogador);


    switch (opcaojogador)
    {
    case 1:
        printf("Qual carta tem a maior populacao? \n");
        printf("Carta 1: %s / carta 2: %s\n", Nome_da_Cidade1, Nome_da_Cidade2);
        printf("carta 1: %i / carta 2: %i\n", Populacao1, Populacao2);

    if (Populacao1 > Populacao2){
        printf("Carta 1 tem mais populacao! \n\n");
    } else if (Populacao1 < Populacao2) {
        printf("Carta 2 tem mais populacao! \n\n");
    }else{
        printf("Ambas as cartas tem a mesma populacao! \n\n");
    }
        break;
    case 2:
    printf("Qual carta tem a maior area? \n");
    printf("Carta 1: %s / carta 2: %s\n", Nome_da_Cidade1, Nome_da_Cidade2);
    printf("carta 1: %f / carta 2: %f\n", area1, area2);

    if(area1 > area2){
        printf("Carta 1 tem mais Area! \n\n");
    } else if (area1 < area2) {
        printf("Carta 2 tem mais Area! \n\n");
    } else {
        printf("Ambas as cartas tem a mesma Area! \n\n");
    }
        break;
    case 3:
    printf("Qual carta tem o maior PIB? \n");
    printf("Carta 1: %s / carta 2: %s\n", Nome_da_Cidade1, Nome_da_Cidade2);
    printf("carta 1: %f / carta 2: %f\n", PIB1, PIB2);

    if(PIB1 > PIB2){
        printf("Carta 1 tem maior PIB \n\n");
    } else if (PIB1 < PIB2) { 
        printf("Carta 2 tem maior PIB \n\n");
    }else{
        printf("Ambas as cartas tem o mesmo PIB! \n\n");
    } break;
    case 4:
    printf("Qual carta tem a menor dencidade populacional? \n");
    printf("Carta 1: %s / carta 2: %s\n", Nome_da_Cidade1, Nome_da_Cidade2);
    printf("carta 1: %f / carta 2: %f\n", Densidade_Populacional1, Densidade_Populacional2);


    if (Densidade_Populacional1 < Densidade_Populacional2){
        printf("Carta 1 tem a menor Densidade Populacional! \n\n");
    } else if (Densidade_Populacional1 > Densidade_Populacional2) {
        printf("Carta 2 tem a menor Densidade populacional! \n\n");
    } else{
        printf("Ambas as cartas tem a mesma Densidade Populacional! \n\n");
    } break;
    case 5:
    printf("Qual carta tem o melhor PIB per Capita? \n");
    printf("Carta 1: %s / carta 2: %s\n", Nome_da_Cidade1, Nome_da_Cidade2);
    printf("carta 1: %f / carta 2: %f\n", PIB_per_capita1, PIB_per_capita2);
    

    if (PIB_per_capita1 > PIB_per_capita2){
        printf("Carta um tem o maior PIB per Capita! \n\n");
    } else if (PIB_per_capita1 < PIB_per_capita2) {
        printf("Carta 2 tem o meior PIB per Capita! \n\n");
    } else{
        printf("Ambas as cartas tem o mesmo PIB per Capita! \n\n");
    } break;

    default:
        printf("Informacao invalida!");
        break;
    }
       
    
        // Fim dos codigos de comparacao
        // Fim do codigo
    






return 0;
} 
