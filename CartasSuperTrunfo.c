#include <stdio.h>
#include <windows.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  SetConsoleOutputCP(65001);
  SetConsoleCP(65001);
  
  char estado[10]; 
  char estado_2[10]; 
  char codigo_da_carta[4];
  char codigo_da_carta_2[4];
  char nome_da_cidade[50];
  int populacao; 
  float area_km;
  float pib; 
  int numeros_de_pontos_turisticos; 

  printf("Digite o Estado 1: \n");
  scanf("%s", estado); 

  printf("Digite o Estado 2: \n");
  scanf("%s", estado_2); 

  printf("Digite o codigo da carta 1: \n");
  scanf("%s", codigo_da_carta); 

  printf("Digite o codigo da carta 2: \n");
  scanf("%s", codigo_da_carta_2); 
  
  printf("Digite o nome da cidade: \n");
  scanf("%s", nome_da_cidade); 

  printf("Digite a quantidade da população: \n");
  scanf("%d", &populacao);

  printf("Digite área em km: \n");
  scanf("%f", &area_km);

  printf("Digite PIB: \n");
  scanf("%f", &pib);

  printf("Digite o números de pontos turisticos: \n");
  scanf("%d", &numeros_de_pontos_turisticos);

//* printf("resultados \n %s \n %s", estado, estado_2);


return 0;
}
