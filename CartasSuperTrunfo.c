#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
// Inicio do espaco para criacao de variaveis.
char Estado;
char Codigo_da_Carta[20];
char Nome_da_Cidade[50];
int Populacao;
float area;
float PIB;
int Numero_de_pontos_turisticos;
  // Fim do espaco para criacao de variaveis

  // Inicio da entradas de dados para primeira e segunda carta
  // Carta 1
printf("Digite a baixo os dados da sua primeira carta:\n");
printf("Qual o estado da sua cidade?\n");
scanf(" %c", &Estado);
printf("Qual o codigo da sua cidade?\n");
scanf(" %s", Codigo_da_Carta);
printf("Qual o nome da sua cidade?\n");
scanf(" %s", Nome_da_Cidade);
printf("Qual a populacao da sua cidade?\n");
scanf(" %i", &Populacao);
printf("Qual a area da sua cidade? \n");
scanf(" %f", &area);
printf("Qual o PIB da sua cidade?\n");
scanf(" %f", &PIB);
printf("Quantos pontos turisticos existem na sua cidade?\n");
scanf(" %i", &Numero_de_pontos_turisticos);
  // Fim da entrada de dados para carta 1
  // Exibicao dos dados da carta 1

printf("Segue os dados da Carta 1:\n");


printf("Estado da cidade e: %c\n", Estado);
printf("Codigo da sua cidade e: %s\n", Codigo_da_Carta);
printf("Nome da cidade e: %s\n", Nome_da_Cidade);
printf("Populacao da cidade e: %i\n", Populacao);
printf("Area da cidade e: %f\n", area);
printf("O PIB da cidade e: %f\n", PIB);
printf("Numero de pontos turisticos: %i\n", Numero_de_pontos_turisticos);
  // Fim da exibicao dos dados da carta 1
  // Carta 2

printf("Digite abaixo os dados da sua segunda carta\n");

printf("Qual o estado da sua cidade?\n");
scanf(" %c", &Estado);
printf("Qual o codigo da sua cidade?\n");
scanf(" %s", Codigo_da_Carta);
printf("Qual o nome da sua cidade?\n");
scanf(" %s", Nome_da_Cidade);
printf("Qual a populacao da sua cidade?\n");
scanf(" %i", &Populacao);
printf("Qual a area da sua cidade?\n");
scanf(" %f", &area);
printf("Qual o PIB da sua cidade?\n");
scanf(" %f", &PIB);
printf("Quantos pontos turisticos existem na sua cidade?\n");
scanf(" %i", &Numero_de_pontos_turisticos);

  // Fim da entrada de dados para segunda carta
  // Exibicao dos dados da carta 2

printf("Seguem os dados da sua segunda carta\n");

printf("Estado da cidade: %c\n", Estado);
printf("Codigo da sua cidade: %s\n", Codigo_da_Carta);
printf("Nome da cidade: %s\n", Nome_da_Cidade);
printf("Populacao da cidade: %i\n", Populacao);
printf("Area da cidade e: %f\n", area);
printf("O PIB da cidade e: %f\n", PIB);
printf("Numero de pontos turisticos: %i\n", Numero_de_pontos_turisticos);
  // Fim da exibicao dos dados da carta 2
// fim da entrada de dados para primeira e segunda carta

return 0;
} 
