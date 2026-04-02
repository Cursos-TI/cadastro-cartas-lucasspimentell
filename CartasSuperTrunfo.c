#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  
  // Área para definição das variáveis para armazenar as propriedades das cidades
      int carta1;
char estado1;
char codigo1[5];
char nomeCidade1[20];
float populacao1;
float area1;
float pib1;
int pontosTuristicos1;
double densidadePopulacional1;
double pibPerCapita1;
int superPoder1;

int carta2;
char estado2;
char codigo2[5];
char nomeCidade2[20];
float populacao2;
float area2;
float pib2;
int pontosTuristicos2;
double densidadePopulacional2;
double pibPerCapita2;
int superPoder2;

int resultadoPopulacao,resultadoArea,resultadoPib,resultadoPontosTuristicos,resultadoDensidadePopulacional ,resultadoPibPerCapita,resultadoSuperPoder;

  // Área para entrada de dados

      printf("\n Digite o número da carta\n");
      scanf("%d",&carta1);

      printf("Digite estado da carta\n");
      scanf(" %c",&estado1);

      printf("Digite o codigo da carta\n");
      scanf(" %s",codigo1);

      printf("Digite o nome da cidade da carta\n");
      scanf(" %s",nomeCidade1);

      printf("Digite a população da carta\n");
      scanf("%f",&populacao1);

      printf("Digite a área da carta\n");
      scanf("%f",&area1);

      printf("Digite o PIB da carta\n");
      scanf("%f",&pib1);

      printf("Digite a quantidade de pontos turisticos da carta\n");
      scanf("%d",&pontosTuristicos1);

    


      printf("\n Digite o número da carta\n");
      scanf("%d",&carta2);

      printf("Digite estado da carta\n");
      scanf(" %c",&estado2);

      printf("Digite o codigo da carta\n");
      scanf(" %s",codigo2);

      printf("Digite o nome da cidade da carta\n");
      scanf(" %s",nomeCidade2);

      printf("Digite a população da carta\n");
      scanf("%f",&populacao2);

      printf("Digite a área da carta\n");
      scanf("%f",&area2);

      printf("Digite o PIB da carta\n");
      scanf("%f",&pib2);

      printf("Digite a quantidade de pontos turisticos da carta\n");
      scanf("%d",&pontosTuristicos2);

  // Área para exibição dos dados da cidade
    printf("\n Carta:%d \n Estado:%c \n Código: %s \n Nome da cidade: 1%s \n População: %.2f \n Área: %.2f Km² \n PIB: %.2f Reais\n Número de pontos Turísticos: %d \n Densidade populacional: %.2f hab/km²\n PIB per Capita: %.2f reais\n",carta1,estado1,codigo1,nomeCidade1,populacao1,area1,pib1,pontosTuristicos1,densidadePopulacional1 = populacao1/area1,pibPerCapita1 = pib1/populacao1, superPoder1 = pibPerCapita1 + area1 + pib1 + pontosTuristicos1 + (int)(populacao1/area1) + (int)pibPerCapita1);

    printf("\n Carta:%d \n Estado:%c \n Código: %s \n Nome da cidade: 1%s \n População: %.2f \n Área: %.2f Km² \n PIB: %.2f Reais\n Número de pontos Turísticos: %d \n Densidade populacional: %.2f hab/km²\n PIB per Capita: %.2f reais\n",carta2,estado2,codigo2,nomeCidade2,populacao2,area2,pib2,pontosTuristicos2,densidadePopulacional2 = populacao2/area2,pibPerCapita2 = pib2/populacao2,superPoder2 = pibPerCapita2 + area2 + pib2 + pontosTuristicos2 + (int)(populacao2/area2) + (int)pibPerCapita2);

    printf("\nComparação de Cartas: \nPopulação: Carta 1 venceu (%d)\nÁrea: Carta 1 venceu (%d)\nPIB: Carta 1 venceu (%d)\nPontos Turísticos: Carta 1 venceu (%d)\nDensidade Populacional: Carta 2 venceu (%d)\nPIB per Capita: Carta 2 venceu (%d)\nSuper Poder: Carta 1 venceu (%d)\n",resultadoPopulacao = populacao1 > populacao2 , resultadoArea = area1>area2 , resultadoPib = pib1>pib2 , resultadoPontosTuristicos = pontosTuristicos1>pontosTuristicos2,resultadoDensidadePopulacional = densidadePopulacional1<densidadePopulacional2, resultadoPibPerCapita = (int)pibPerCapita1> (int)pibPerCapita2,resultadoSuperPoder = (int)superPoder1>(int)superPoder2);
} 
