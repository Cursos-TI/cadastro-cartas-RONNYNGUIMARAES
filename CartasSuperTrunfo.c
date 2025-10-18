#include <stdio.h>

int main() {

    printf("Desafio Cartas - Nivel Novato\n");

    // ------------------------
    // CARTA 1
    // ------------------------
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // ------------------------
    // CARTA 2
    // ------------------------
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;


    //Utilizado os caracteres --- e === para melhor visualização
    //Utilizado ^[^\n] no scanf para ler strings com espaços (Ex.: Pedro Paulo)
    /*a)#Include inclui a biblioteca padrão de entrada e saida
    b) int man é a função para inicio da execução do programa
    c) printf imprime e/ou mostra na tela a imagem da mensagem
    d) return 0 usado para indicar que o programa terminou com sucesso
    e) Utilizado /n para adicionar uma linha ao final da mensagem
    f) Em "estado, codigo e nomecidade" foi utilizado por serem considerados como um caracter variavel
    contudo, em codigo e nomecidade foi atribuido uma quantidade limitada de caracteres
    em Estado colocamos uma orientação (A-H) para orientação das possibilidades de seleção
    g) usamos a variavel int para valores inteiros em população e pontosturisticos
    h) já a variavel float em pib e area por considerar necessidade do uso de virgula, contudo,
    não não foi codificado para uso de ponto e virgula padrão Brasil
    i) Utilizado "//" e barra com asteristico para comentario longo
    j) para printf utilizamos printf("%formato dos dados", descrição da variavel)*/

    /* Separei em duas partes Carta 1 e Carta 2
    Primeiro foi proposto um printf para orientar e/ou mostrar ao usuario o que ele deve fazer ou escrever
    seguido em scanf (que funciona como entrada de dados) ou seja onde o usuario ira digitar
    e fornecer as informações solicitadas*/

    // ------------------------
    // CARTA 1
    // ------------------------
    printf("=== Cadastro da Carta 1 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1); // espaço antes do %c para limpar buffer

    printf("Código da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1); // lê nome com espaços

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // ------------------------
    // CARTA 2
    // ------------------------
    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Código da Carta (ex: B01): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // ------------------------
    // Exibição CARTA 1
    // ------------------------
    printf("\n==============================\n");
    printf("        CARTA 1\n");
    printf("================================\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    // ------------------------
    // Exibição CARTA 2
    // ------------------------
    printf("\n==============================\n");
    printf("        CARTA 2\n");
    printf("================================\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}
