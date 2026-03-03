#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.
// calculo da densidade populacional: população / area da cidade
//calculo do pib percapita pib / pela população
int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado1, estado2;
    char codigo1[50], codigo2[50];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2, densidade1, densidade2;
    float pib1, pib2, pibpercapita1, pibpercapita2;
    int turisticos1, turisticos2;
  // Área para entrada de dados
    printf("Informe a seguintes informações da sua carta número 1: \n");
    printf("informe uma letra de A a H correspondente ao estado desejado: ");
    scanf("%c", &estado1);

    printf("informe um codigo para a carta que será a letra do estado seguida de um numero de 01 a 04: \n");
    scanf("%s", &codigo1);
    
    printf("Nome da Cidade: \n");
    scanf("%s", &cidade1);

    printf("O número de habitantes da cidade: \n");
    scanf("%d", &populacao1);

    printf("Qual a área e Km² dessa cidade: \n");
    scanf("%f", &area1);

    printf("qual o PIB dessa cidade: \n");
    scanf("%f", &pib1);

    printf("informe a quantidade de pontos turísticos tem nessa cidade: \n");
    scanf("%d", &turisticos1);

    //àrea para cálculos
    densidade1 = (float) populacao1 / area1;
    densidade2 = (float) populacao2 / area2;

    pibpercapita1 = (float)(pib1 / populacao1);
    pibpercapita2 = (float)(pib2 / populacao2);



    printf("CARTA 1: \n");
    printf("Estado: %c \n", estado1);
    printf("Codigo: %s \n", codigo1);
    printf("Cidade: %s \n", cidade1);
    printf("População: %d \n", populacao1);
    printf("Area: %2.f \n", area1);
    printf("PIB: %2.f\n", pib1);
    printf("Numero de pontos turisticos: %.2f\n", turisticos1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("O Pib Percapita é: %.2f\n", pibpercapita1);

    /*printf("CARTA 1: \n");
    printf("Estado: %c \n", estado2);
    printf("Codigo: %s \n", codigo2);
    printf("Cidade: %s \n", cidade2);
    printf("População: %d \n", populacao2);
    printf("Area: %2.f \n", area2);
    printf("PIB: %2.f\n", pib2);
    printf("Numero de pontos turisticos: %.2f \n", turisticos2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("O Pib Percapita é: %.2f\n", pibpercapita2);
*/

  // Área para exibição dos dados da cidade

return 0;
} 
