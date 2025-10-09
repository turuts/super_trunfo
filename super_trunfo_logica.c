#include <stdio.h>
#include <string.h>

#define MAX_CIDADE 50

int main(){
    //Variáveis da primeira carta
    char estado1, codigo1[4], cidade1[MAX_CIDADE];
    int pontos_turisticos1;
    float area1, pib1, densidade_populacional1, pib_percapta1;
    unsigned long int populacao1;

    // Variáveis para segunda carta
    char estado2, codigo2[4], cidade2[MAX_CIDADE];
    int pontos_turisticos2;
    float area2, pib2, densidade_populacional2, pib_percapta2; 
    unsigned long int populacao2;
    
    printf("=== SUPER TRUNFO - CADASTRO DE CARTAS ===\n\n");

    //Entrada de dados da primeira carta
    printf("--- PRIMEIRA CARTA ---\n");

    printf("Letra do Estado: ");
    scanf(" %c", &estado1);

    printf("Código da Carta (ex: A01): ");
    scanf(" %s", codigo1);
    
    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("População: ");
    scanf("%lu", &populacao1);

    printf("Área (km²): ");
    scanf("%f", &area1);

    printf("PIB (bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);

    //Cálculos para a primeira cidade
    densidade_populacional1 = populacao1 / area1;
    pib_percapta1 = (pib1 * 1000000000) / populacao1;

    printf("\n");

    //Entrada de dados para a segunda carta
    printf("--- SEGUNDA CARTA ---\n");
    
    printf("Letra do Estado: ");
    scanf(" %c", &estado2);

    printf("Código da Carta (ex: B02): ");
    scanf(" %s", codigo2);
    
    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("População: ");
    scanf("%lu", &populacao2);

    printf("Área (km²): ");
    scanf("%f", &area2);

    printf("PIB (bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);

    //Cálculos para a segunda cidade
    densidade_populacional2 = populacao2 / area2;
    pib_percapta2 = (pib2 * 1000000000) / populacao2;

    printf("\n");

    //Exibição dos dados das cartas
    printf("=== CARTAS CADASTRADAS ===\n\n");

    printf("Carta 1:\n");
    printf("Estado : %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per capta: R$ %.2f\n", pib_percapta1);
    
    printf("\n");

    printf("Carta 2:\n");
    printf("Estado : %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per capta: R$ %.2f\n", pib_percapta2);

    printf("\n=== Cartas cadastradas com sucesso! ===\n");

// MENU INTERATIVO PARA ESCOLHA DO PRIMEIRO ATRIBUTO
    int opcao1, opcao2;
    
    printf("\n=== MENU DE COMPARAÇÃO - PRIMEIRO ATRIBUTO ===\n");
    printf("Escolha o primeiro atributo para comparar as cartas:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("Digite sua opção (1-5): ");
    scanf("%d", &opcao1);
    
    // MENU DINÂMICO PARA ESCOLHA DO SEGUNDO ATRIBUTO
    printf("\n=== MENU DE COMPARAÇÃO - SEGUNDO ATRIBUTO ===\n");
    printf("Escolha o segundo atributo (diferente do primeiro):\n");
    
    // Menu dinâmico - não mostra a opção já escolhida
    for(int i = 1; i <= 5; i++) {
        if(i != opcao1) {
            switch(i) {
                case 1: printf("1 - População\n"); break;
                case 2: printf("2 - Área\n"); break;
                case 3: printf("3 - PIB\n"); break;
                case 4: printf("4 - Pontos Turísticos\n"); break;
                case 5: printf("5 - Densidade Populacional\n"); break;
            }
        }
    }
    
    printf("Digite sua opção: ");
    scanf("%d", &opcao2);
    
    // Validação para garantir que os atributos são diferentes
    while(opcao2 == opcao1 || opcao2 < 1 || opcao2 > 5) {
        printf("Opção inválida! Escolha um atributo diferente do primeiro: ");
        scanf("%d", &opcao2);
    }
    
    printf("\n=== COMPARAÇÃO DE CARTAS ===\n");
    printf("Países: %s (%c) vs %s (%c)\n\n", cidade1, estado1, cidade2, estado2);
    
    // Variáveis para armazenar os valores normalizados dos atributos
    float valor1_atributo1, valor2_atributo1;
    float valor1_atributo2, valor2_atributo2;
    char nome_atributo1[30], nome_atributo2[30];
    
    // Processamento do primeiro atributo
    printf("--- PRIMEIRO ATRIBUTO ---\n");
    switch(opcao1) {
        case 1: // População
            strcpy(nome_atributo1, "População");
            valor1_atributo1 = populacao1;
            valor2_atributo1 = populacao2;
            printf("População (maior valor vence):\n");
            printf("%s: %lu habitantes\n", cidade1, populacao1);
            printf("%s: %lu habitantes\n", cidade2, populacao2);
            
            if (populacao1 > populacao2) {
                printf("-> %s vence neste atributo!\n\n", cidade1);
            }
            else if (populacao2 > populacao1) {
                printf("-> %s vence neste atributo!\n\n", cidade2);
            }
            else {
                printf("-> Empate neste atributo!\n\n");
            }
            break;
            
        case 2: // Área
            strcpy(nome_atributo1, "Área");
            valor1_atributo1 = area1;
            valor2_atributo1 = area2;
            printf("Área (maior valor vence):\n");
            printf("%s: %.2f km²\n", cidade1, area1);
            printf("%s: %.2f km²\n", cidade2, area2);
            
            if (area1 > area2) {
                printf("-> %s vence neste atributo!\n\n", cidade1);
            }
            else if (area2 > area1) {
                printf("-> %s vence neste atributo!\n\n", cidade2);
            }
            else {
                printf("-> Empate neste atributo!\n\n");
            }
            break;
            
        case 3: // PIB
            strcpy(nome_atributo1, "PIB");
            valor1_atributo1 = pib1;
            valor2_atributo1 = pib2;
            printf("PIB (maior valor vence):\n");
            printf("%s: %.2f bilhões\n", cidade1, pib1);
            printf("%s: %.2f bilhões\n", cidade2, pib2);
            
            if (pib1 > pib2) {
                printf("-> %s vence neste atributo!\n\n", cidade1);
            }
            else if (pib2 > pib1) {
                printf("-> %s vence neste atributo!\n\n", cidade2);
            }
            else {
                printf("-> Empate neste atributo!\n\n");
            }
            break;
            
        case 4: // Pontos Turísticos
            strcpy(nome_atributo1, "Pontos Turísticos");
            valor1_atributo1 = pontos_turisticos1;
            valor2_atributo1 = pontos_turisticos2;
            printf("Pontos Turísticos (maior valor vence):\n");
            printf("%s: %d pontos\n", cidade1, pontos_turisticos1);
            printf("%s: %d pontos\n", cidade2, pontos_turisticos2);
            
            if (pontos_turisticos1 > pontos_turisticos2) {
                printf("-> %s vence neste atributo!\n\n", cidade1);
            }
            else if (pontos_turisticos2 > pontos_turisticos1) {
                printf("-> %s vence neste atributo!\n\n", cidade2);
            }
            else {
                printf("-> Empate neste atributo!\n\n");
            }
            break;
            
        case 5: // Densidade Populacional
            strcpy(nome_atributo1, "Densidade Populacional");
            // Para densidade, invertemos os valores para normalizar (menor valor vira maior)
            valor1_atributo1 = -densidade_populacional1;
            valor2_atributo1 = -densidade_populacional2;
            printf("Densidade Populacional (menor valor vence):\n");
            printf("%s: %.2f hab/km²\n", cidade1, densidade_populacional1);
            printf("%s: %.2f hab/km²\n", cidade2, densidade_populacional2);
            
            if (densidade_populacional1 < densidade_populacional2) {
                printf("-> %s vence neste atributo!\n\n", cidade1);
            }
            else if (densidade_populacional2 < densidade_populacional1) {
                printf("-> %s vence neste atributo!\n\n", cidade2);
            }
            else {
                printf("-> Empate neste atributo!\n\n");
            }
            break;
    }
    
    // Processamento do segundo atributo
    printf("--- SEGUNDO ATRIBUTO ---\n");
    switch(opcao2) {
        case 1: // População
            strcpy(nome_atributo2, "População");
            valor1_atributo2 = populacao1;
            valor2_atributo2 = populacao2;
            printf("População (maior valor vence):\n");
            printf("%s: %lu habitantes\n", cidade1, populacao1);
            printf("%s: %lu habitantes\n", cidade2, populacao2);
            
            if (populacao1 > populacao2) {
                printf("-> %s vence neste atributo!\n\n", cidade1);
            }
            else if (populacao2 > populacao1) {
                printf("-> %s vence neste atributo!\n\n", cidade2);
            }
            else {
                printf("-> Empate neste atributo!\n\n");
            }
            break;
            
        case 2: // Área
            strcpy(nome_atributo2, "Área");
            valor1_atributo2 = area1;
            valor2_atributo2 = area2;
            printf("Área (maior valor vence):\n");
            printf("%s: %.2f km²\n", cidade1, area1);
            printf("%s: %.2f km²\n", cidade2, area2);
            
            if (area1 > area2) {
                printf("-> %s vence neste atributo!\n\n", cidade1);
            }
            else if (area2 > area1) {
                printf("-> %s vence neste atributo!\n\n", cidade2);
            }
            else {
                printf("-> Empate neste atributo!\n\n");
            }
            break;
            
        case 3: // PIB
            strcpy(nome_atributo2, "PIB");
            valor1_atributo2 = pib1;
            valor2_atributo2 = pib2;
            printf("PIB (maior valor vence):\n");
            printf("%s: %.2f bilhões\n", cidade1, pib1);
            printf("%s: %.2f bilhões\n", cidade2, pib2);
            
            if (pib1 > pib2) {
                printf("-> %s vence neste atributo!\n\n", cidade1);
            }
            else if (pib2 > pib1) {
                printf("-> %s vence neste atributo!\n\n", cidade2);
            }
            else {
                printf("-> Empate neste atributo!\n\n");
            }
            break;
            
        case 4: // Pontos Turísticos
            strcpy(nome_atributo2, "Pontos Turísticos");
            valor1_atributo2 = pontos_turisticos1;
            valor2_atributo2 = pontos_turisticos2;
            printf("Pontos Turísticos (maior valor vence):\n");
            printf("%s: %d pontos\n", cidade1, pontos_turisticos1);
            printf("%s: %d pontos\n", cidade2, pontos_turisticos2);
            
            if (pontos_turisticos1 > pontos_turisticos2) {
                printf("-> %s vence neste atributo!\n\n", cidade1);
            }
            else if (pontos_turisticos2 > pontos_turisticos1) {
                printf("-> %s vence neste atributo!\n\n", cidade2);
            }
            else {
                printf("-> Empate neste atributo!\n\n");
            }
            break;
            
        case 5: // Densidade Populacional
            strcpy(nome_atributo2, "Densidade Populacional");
            // Para densidade, invertemos os valores para normalizar (menor valor vira maior)
            valor1_atributo2 = -densidade_populacional1;
            valor2_atributo2 = -densidade_populacional2;
            printf("Densidade Populacional (menor valor vence):\n");
            printf("%s: %.2f hab/km²\n", cidade1, densidade_populacional1);
            printf("%s: %.2f hab/km²\n", cidade2, densidade_populacional2);
            
            if (densidade_populacional1 < densidade_populacional2) {
                printf("-> %s vence neste atributo!\n\n", cidade1);
            }
            else if (densidade_populacional2 < densidade_populacional1) {
                printf("-> %s vence neste atributo!\n\n", cidade2);
            }
            else {
                printf("-> Empate neste atributo!\n\n");
            }
            break;
    }
    
    // CÁLCULO DA SOMA E RESULTADO FINAL
    printf("--- RESULTADO FINAL ---\n");
    
    // Calcular a soma dos atributos normalizados
    float soma_carta1 = valor1_atributo1 + valor1_atributo2;
    float soma_carta2 = valor2_atributo1 + valor2_atributo2;
    
    printf("Soma dos atributos normalizados:\n");
    printf("%s: %.2f pontos\n", cidade1, soma_carta1);
    printf("%s: %.2f pontos\n", cidade2, soma_carta2);
    printf("\n");
    
    // Determinar o vencedor
    if (soma_carta1 > soma_carta2) {
        printf("🎉 RESULTADO: %s (%c) VENCEU! 🎉\n", cidade1, estado1);
        printf("Motivo: Maior soma de atributos (%.2f vs %.2f)\n", soma_carta1, soma_carta2);
    }
    else if (soma_carta2 > soma_carta1) {
        printf("🎉 RESULTADO: %s (%c) VENCEU! 🎉\n", cidade2, estado2);
        printf("Motivo: Maior soma de atributos (%.2f vs %.2f)\n", soma_carta2, soma_carta1);
    }
    else {
        printf("🤝 RESULTADO: EMPATE! 🤝\n");
        printf("Ambas as cartas têm a mesma soma de atributos: %.2f\n", soma_carta1);
    }

    return 0;
}
