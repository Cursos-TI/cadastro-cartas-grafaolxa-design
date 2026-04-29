#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  
  char Estado; 
  char codigo_da_carta[6];
  char nome_da_cidade[50];
  int populaçao; 
  float area em km;
  float PIB; 
  int numeros_de_pontos_turisticos; 

   printf("digite o Estado: \n");
    scanf(" %S", &Estado);
   printf("digite o codigo_da_carta: \n");
   scanf("%s" ,&codigo_da_carta);
  printf("digite o nome_da_cidade: \n");
  scanf("%s" ,&nome da cidade);
  printf("digite a quantidade  da população: \n");
  scanf("%d" ,&população);
  printf("digite área em km: \n");
  scanf("%f" ,&area em km);
  printf("digite PIB: \n);
  scanf("%f" ,&PIB);
  printf("digite o números de pontos turisticos: \n");
  scanf("%d" ,&pontos turisticos);

  
  return 0;
} 
