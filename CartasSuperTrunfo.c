#include <stdio.h>

int main() {
    // Variáveis da Carta 1
    char Estado1, Codigo_da_Carta1[20], Nome_da_Cidade1[50];
    int Populacao1, Numero_de_pontos_turisticos1;
    float area1, PIB1, Densidade_Populacional1, PIB_per_capita1;

    // Variáveis da Carta 2
    char Estado2, Codigo_da_Carta2[20], Nome_da_Cidade2[50];
    int Populacao2, Numero_de_pontos_turisticos2;
    float area2, PIB2, Densidade_Populacional2, PIB_per_capita2;

    // Variáveis de Jogo
    int opcao1, opcao2;
    float valor1_C1, valor1_C2, valor2_C1, valor2_C2;
    float somaC1, somaC2;

    // ---- Cadastro das Cartas (Resumido para o exemplo) ----
    printf("--- Cadastro da Carta 1 ---\n");
    printf("Nome da Cidade: "); scanf(" %s", Nome_da_Cidade1);
    printf("Populacao: "); scanf("%d", &Populacao1);
    printf("Area: "); scanf("%f", &area1);
    printf("PIB: "); scanf("%f", &PIB1);
    printf("Pontos Turisticos: "); scanf("%d", &Numero_de_pontos_turisticos1);
    
    Densidade_Populacional1 = (float)Populacao1 / area1;
    PIB_per_capita1 = PIB1 / (float)Populacao1;

    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Nome da Cidade: "); scanf(" %s", Nome_da_Cidade2);
    printf("Populacao: "); scanf("%d", &Populacao2);
    printf("Area: "); scanf("%f", &area2);
    printf("PIB: "); scanf("%f", &PIB2);
    printf("Pontos Turisticos: "); scanf("%d", &Numero_de_pontos_turisticos2);

    Densidade_Populacional2 = (float)Populacao2 / area2;
    PIB_per_capita2 = PIB2 / (float)Populacao2;

    // ---- Menu de Seleção de Atributos ----
    printf("\n=== Menu de Comparação ===\n");
    printf("Escolha o PRIMEIRO atributo:\n");
    printf("1. Populacao\n2. Area\n3. PIB\n4. Pontos Turisticos\n5. Densidade Demografica\n");
    printf("Opcao: ");
    scanf("%d", &opcao1);

    printf("\nEscolha o SEGUNDO atributo (diferente do primeiro):\n");
    // Menu "Dinâmico" - Omitindo a lógica complexa de UI, garantimos via código que sejam diferentes
    printf("1. Populacao\n2. Area\n3. PIB\n4. Pontos Turisticos\n5. Densidade Demografica\n");
    printf("Opcao: ");
    scanf("%d", &opcao2);

    if (opcao1 == opcao2) {
        printf("\nERRO: Voce escolheu o mesmo atributo duas vezes! Reinicie o jogo.\n");
        return 0;
    }

    // ---- Lógica de Atribuição de Valores (Switch) ----
    // Atributo 1
    switch (opcao1) {
        case 1: valor1_C1 = Populacao1; valor1_C2 = Populacao2; break;
        case 2: valor1_C1 = area1; valor1_C2 = area2; break;
        case 3: valor1_C1 = PIB1; valor1_C2 = PIB2; break;
        case 4: valor1_C1 = Numero_de_pontos_turisticos1; valor1_C2 = Numero_de_pontos_turisticos2; break;
        case 5: valor1_C1 = Densidade_Populacional1; valor1_C2 = Densidade_Populacional2; break;
        default: printf("Opcao Invalida!"); return 0;
    }

    // Atributo 2
    switch (opcao2) {
        case 1: valor2_C1 = Populacao1; valor2_C2 = Populacao2; break;
        case 2: valor2_C1 = area1; valor2_C2 = area2; break;
        case 3: valor2_C1 = PIB1; valor2_C2 = PIB2; break;
        case 4: valor2_C1 = Numero_de_pontos_turisticos1; valor2_C2 = Numero_de_pontos_turisticos2; break;
        case 5: valor2_C1 = Densidade_Populacional1; valor2_C2 = Densidade_Populacional2; break;
        default: printf("Opcao Invalida!"); return 0;
    }

    // ---- Cálculo da Soma (Considerando a regra da Densidade) ----
    // Se for densidade, subtraímos ou invertemos o peso para a soma? 
    // Para manter a lógica de "maior soma vence", usaremos o valor real.
    somaC1 = valor1_C1 + valor2_C1;
    somaC2 = valor1_C2 + valor2_C2;

    // ---- Exibição dos Resultados ----
    printf("\n--- RESULTADO DA BATALHA ---\n");
    printf("Cidade 1: %s vs Cidade 2: %s\n", Nome_da_Cidade1, Nome_da_Cidade2);
    
    // Comparação Atributo 1 (Ternário para Densidade)
    printf("Atributo 1: %f vs %f -> Vencedor: ", valor1_C1, valor1_C2);
    if (opcao1 == 5) // Densidade: menor vence
        printf("%s\n", (valor1_C1 < valor1_C2) ? Nome_da_Cidade1 : "Cidade 2");
    else
        printf("%s\n", (valor1_C1 > valor1_C2) ? Nome_da_Cidade1 : "Cidade 2");

    // Comparação Atributo 2
    printf("Atributo 2: %f vs %f -> Vencedor: ", valor2_C1, valor2_C2);
    if (opcao2 == 5)
        printf("%s\n", (valor2_C1 < valor2_C2) ? Nome_da_Cidade1 : "Cidade 2");
    else
        printf("%s\n", (valor2_C1 > valor2_C2) ? Nome_da_Cidade1 : "Cidade 2");

    printf("----------------------------\n");
    printf("Soma Total C1: %.2f\n", somaC1);
    printf("Soma Total C2: %.2f\n", somaC2);

    // Veredito Final
    if (somaC1 > somaC2) {
        printf("RESULTADO FINAL: %s VENCEU!\n", Nome_da_Cidade1);
    } else if (somaC2 > somaC1) {
        printf("RESULTADO FINAL: %s VENCEU!\n", Nome_da_Cidade2);
    } else {
        printf("RESULTADO FINAL: EMPATE!\n");
    }

    return 0;
}
