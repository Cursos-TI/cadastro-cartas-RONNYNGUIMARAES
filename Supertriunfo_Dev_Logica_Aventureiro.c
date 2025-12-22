#include <stdio.h>

int main() {

    // ========================
    // DECLARAÇÃO DAS VARIÁVEIS
    // ========================
    
    //------------------------
    // CARTA 1
    //------------------------

    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;


    //------------------------
    // CARTA 2
    //------------------------

    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;

    int opcao;

    // ========================
    // ENTRADA DE DADOS
    // ========================

    //------------------------
    // CARTA 1 
    //------------------------

    printf("=== Cadastro da Carta 1 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("População: ");
    scanf("%lu", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    //------------------------
    // CARTA 2
    //------------------------

    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Código da Carta (ex: B01): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("População: ");
    scanf("%lu", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // ========================
    // CÁLCULOS
    // ========================

    densidadePopulacional1 = (float) populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / (float) populacao1; //PIB convertido de Bilhões para Reais

    densidadePopulacional2 = (float) populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / (float) populacao2;

    
    // ------------------------
    // EXIBIÇÃO CARTA 1
    // ------------------------

    printf("\n==============================\n");
    printf("        CARTA 1\n");
    printf("================================\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f\n", pibPerCapita1);
    

    // ------------------------
    // EXIBIÇÃO CARTA 2
    // ------------------------

    printf("\n==============================\n");
    printf("        CARTA 2\n");
    printf("================================\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f\n", pibPerCapita2);
    

    // ------------------------------------------------------------
    // COMPARAÇÃO - ATRIBUTOS SELECIONÁVEIS
    // O USUÁRIO ESCOLHE O ATRIBUTO PARA COMPARAR
    /* REGRA: VENCE A CARTA COM MAIOR VALOR NO ATRIBUTO ESCOLHIDO, 
    EXCETO DENSIDADE POPULACIONAL (MENOR VALOR VENCE)*/
    // ------------------------------------------------------------


    // ========================
    // MENU INTERATIVO
    // ========================

    printf("\n===== MENU DE COMPARAÇÃO =====\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("Escolha o atributo para comparação: ");
    scanf("%d", &opcao);

    // ========================
    // COMPARAÇÃO COM SWITCH
    // ========================

    switch (opcao) {

        case 1: // População
            printf("\nComparação por População\n");
            if (populacao1 > populacao2)
                printf("Resultado: %s venceu!\n", nomeCidade1);
            else if (populacao2 > populacao1)
                printf("Resultado: %s venceu!\n", nomeCidade2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 2: // Área
            printf("\nComparação por Área\n");
            if (area1 > area2)
                printf("Resultado: %s venceu!\n", nomeCidade1);
            else if (area2 > area1)
                printf("Resultado: %s venceu!\n", nomeCidade2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 3: // PIB
            printf("\nComparação por PIB\n");
            if (pib1 > pib2)
                printf("Resultado: %s venceu!\n", nomeCidade1);
            else if (pib2 > pib1)
                printf("Resultado: %s venceu!\n", nomeCidade2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 4: // Pontos Turísticos
            printf("\nComparação por Pontos Turísticos\n");
            if (pontosTuristicos1 > pontosTuristicos2)
                printf("Resultado: %s venceu!\n", nomeCidade1);
            else if (pontosTuristicos2 > pontosTuristicos1)
                printf("Resultado: %s venceu!\n", nomeCidade2);
            else
                printf("Resultado: Empate!\n");
            break;

        case 5: // Densidade (MENOR vence)
            printf("\nComparação por Densidade Populacional\n");
            if (densidadePopulacional1 < densidadePopulacional2)
                printf("Resultado: %s venceu!\n", nomeCidade1);
            else if (densidadePopulacional2 < densidadePopulacional1)
                printf("Resultado: %s venceu!\n", nomeCidade2);
            else
                printf("Resultado: Empate!\n");
            break;

        default:
            printf("\nOpção inválida! Escolha um número entre 1 e 5.\n");
    }

    return 0;
}
