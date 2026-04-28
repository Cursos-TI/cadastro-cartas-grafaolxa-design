#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  
  char Estado; 
  char código_da_carta[6];
  char nome_da_cidade[50];
  int população; 
  float área em km;
  float PIB; 
  int números_de_pontos_turísticos; 

   printf("digite o Estado: \n");
    scanf(" %S", &Estado);
   printf("digite o código_da_carta: \n");
   scanf("%s" ,&código_da_carta);
  printf("digite o nome_da_cidade: \n");
  scanf("%s" ,&nome da cidade);
  printf("digite a quantidade  da população: \n");
  scanf("%d" ,&população);
  printf("digite área em km: \n");
  scanf("%f" ,&área em km);
  printf("digite PIB: \n);
  scanf("%f" ,&PIB);
  printf("digite o números de pontos turísticos: \n");
  scanf("%d" ,&pontos turísticos);

  
  return 0;
} 
