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
    
    // Variáveis para Super Poder
    float super_poder1, super_poder2;
    
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

    //Exibição dos dados da primeira carta
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

    //Exibição dos dados da segunda carta
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

    // CÁLCULO DO SUPER PODER
    super_poder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + 
                   pib_percapta1 + (1.0 / densidade_populacional1);
    
    super_poder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + 
                   pib_percapta2 + (1.0 / densidade_populacional2);

    // BATALHA DE CARTAS - COMPARAÇÃO
    printf("\nComparação de Cartas:\n");
    
    // População (maior vence)
    printf("População: Carta %d venceu (%d)\n", 
       1 + (populacao1 <= populacao2), 
       populacao1 > populacao2);
    
    // Área (maior vence)
    printf("Área: Carta %d venceu (%d)\n", 
       1 + (area1 <= area2), 
       area1 > area2);
    
    // PIB (maior vence)
    printf("PIB: Carta %d venceu (%d)\n", 
       1 + (pib1 <= pib2), 
       pib1 > pib2);
    
    // Pontos Turísticos (maior vence)
   printf("Pontos Turísticos: Carta %d venceu (%d)\n", 
       1 + (pontos_turisticos1 <= pontos_turisticos2), 
       pontos_turisticos1 > pontos_turisticos2);
    
    // Densidade Populacional (MENOR vence)
    printf("Densidade Populacional: Carta %d venceu (%d)\n", 
       1 + (densidade_populacional1 >= densidade_populacional2), 
       densidade_populacional1 < densidade_populacional2);

    // PIB per capta (maior vence)
   printf("PIB per Capta: Carta %d venceu (%d)\n", 
       1 + (pib_percapta1 <= pib_percapta2), 
       pib_percapta1 > pib_percapta2);
    
    // Super Poder (maior vence)
    printf("Super Poder: Carta %d venceu (%d)\n", 
       1 + (super_poder1 <= super_poder2), 
       super_poder1 > super_poder2);

    return 0;
}