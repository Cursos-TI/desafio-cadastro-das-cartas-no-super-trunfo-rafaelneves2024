#include <stdio.h>

//primeiro inserir as variaveis
int main() {
    char estado[50], estado2[50];
    char codigo[4], codigo3[4];
    char cidade[50], cidade2[50];
    int pop, pop2;
    float km2, km22;
    float pib, pib2;
    int turismo, turismo2;

    //segundo, espaço para quer o 1º jogador insira as informações da carta
    printf("CARTA 1\n");

         printf("Estado: ");
            scanf("%s", estado);
         printf("Codigo da Carta: ");
            scanf("%s", codigo);
        printf("Cidade: ");
            scanf("%s", cidade);
        printf("População: ");
            scanf("%d", &pop);
        printf("KM²: ");
            scanf("%f", &km2);
        printf("Produto Interno Bruto (PIB): ");
            scanf("%f", &pib);
        printf("Quantas cidades turísticas?: ");
            scanf("%d", &turismo);
    
            printf("\n\n");

    // terceiro, espaço para quer o 2º jogador insira as informações da carta2
    printf("CARTA 2\n");

        printf("Estado: ");
            scanf("%s", estado2);
        printf("Codigo da Carta: ");
           scanf("%s", codigo3);
        printf("Cidade: ");
           scanf("%s", cidade2);
        printf("População: ");
            scanf("%d", &pop2);
        printf("KM²: ");
          scanf("%f", &km22);
     printf("Produto Interno Bruto (PIB): ");
         scanf("%f", &pib2);
     printf("Quantas cidades turísticas?: ");
         scanf("%d", &turismo2);
    printf("\n\n");

    // Exibição da CARTA 1
    printf("CARTA 1\n");
    printf("\n");
    printf("ESTADO: %s\n", estado);
    printf("CODIGO: %s\n", codigo);
    printf("CIDADE: %s\n", cidade);
    printf("POPULAÇÃO: %d\n", pop);
    printf("KM²: %.2f\n", km2); // Formatei para 2 casas decimais
    printf("PRODUTO INTERNO BRUTO (PIB): %.2f\n", pib); // Formatei para 2 casas decimais
    printf("CIDADES TURÍSTICAS: %d\n", turismo);
    printf("\n");

    // Exibição da CARTA 2
    printf("CARTA 2\n");
    printf("\n");
    printf("ESTADO: %s\n", estado2);
    printf("CODIGO: %s\n", codigo3);
    printf("CIDADE: %s\n", cidade2);
    printf("POPULAÇÃO: %d\n", pop2);
    printf("KM²: %.2f\n", km22); // Formatei para 2 casas decimais
    printf("PRODUTO INTERNO BRUTO (PIB): %.2f\n", pib2); // Formatei para 2 casas decimais
    printf("CIDADES TURÍSTICAS: %d\n", turismo2);

    return 0;
}