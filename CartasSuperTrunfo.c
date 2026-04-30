#include <stdio.h>

int main() {
    // Configuração para exibir acentos corretamente no terminal do Windows
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    // --- Variáveis da Carta 1 ---
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // --- Variáveis da Carta 2 ---
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    printf("--- Desafio Super Trunfo: Cadastro de Cartas ---\n\n");

    // ==========================================
    // ENTRADA DE DADOS - CARTA 1
    // ==========================================
    printf("Digite os dados da Carta 1:\n");
    
    printf("Estado (Letra de A a H): ");
    // O espaço antes do %c é um truque importante em C para limpar o "Enter" do teclado
    scanf(" %c", &estado1); 

    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade (sem espaços, ex: Belo_Horizonte): ");
    scanf("%s", nomeCidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\n"); // Pula uma linha para separar

    // ==========================================
    // ENTRADA DE DADOS - CARTA 2
    // ==========================================
    printf("Digite os dados da Carta 2:\n");
    
    printf("Estado (Letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Código da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade (sem espaços, ex: Contagem): ");
    scanf("%s", nomeCidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // ==========================================
    // SAÍDA DE DADOS (EXIBIÇÃO)
    // ==========================================
    printf("\n========================================\n");
    printf("        CARTAS CADASTRADAS\n");
    printf("========================================\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\n----------------------------------------\n");

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    
    printf("\n========================================\n");

    return 0;
}

