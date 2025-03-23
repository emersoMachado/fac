#include <stdio.h>
 
struct Card {
  char state;
  char card_code[4]; //O index é 4, pois em char sempre irá adicionar o \n, então seria A01\n
  char city[50];
  int population;
  float area_in_square_kilometers;
  float pib;
  int number_tourist_attractions;
};

int main() {
  struct Card cards[2]; //informa a quantidade de objetos recebiveis

  int records = 0; //index do objeto
  
  printf("\n--- Carta %d ---\n", records + 1);

  printf("Uma letra de 'A' a 'H' (representando um dos oito estados): ");
  scanf(" %c", &cards[records].state);

  printf("A letra do estado seguida de um número de 01 a 04 (ex: A01, B03): ");
  scanf("%3s", cards[records].card_code);
  getchar(); //para remover \n  para não causar um bug no campo abaixo;

  printf("O nome da cidade: ");
  scanf(" %49[^\n]", cards[records].city);
  
  printf("O número de habitantes da cidade: ");
  scanf("%d", &cards[records].population);

  printf("A área da cidade em quilômetros quadrados: ");
  scanf("%f", &cards[records].area_in_square_kilometers);

  printf("O Produto Interno Bruto da cidade: ");
  scanf("%f", &cards[records].pib);

  printf("A quantidade de pontos turísticos na cidade: ");
  scanf("%d", &cards[records].number_tourist_attractions);
  getchar(); //para remover \n  para não causar um bug no campo abaixo;

  records++;

  printf("\n--- Carta %d ---\n", records + 1);

  printf("Uma letra de 'A' a 'H' (representando um dos oito estados): ");
  scanf(" %c", &cards[records].state);

  printf("A letra do estado seguida de um número de 01 a 04 (ex: A01, B03): ");
  scanf("%3s", cards[records].card_code);
  getchar(); //para remover \n  para não causar um bug no campo abaixo;

  printf("O nome da cidade: ");
  scanf(" %49[^\n]", cards[records].city);
  
  printf("O número de habitantes da cidade: ");
  scanf("%d", &cards[records].population);

  printf("A área da cidade em quilômetros quadrados: ");
  scanf("%f", &cards[records].area_in_square_kilometers);

  printf("O Produto Interno Bruto da cidade: ");
  scanf("%f", &cards[records].pib);

  printf("A quantidade de pontos turísticos na cidade: ");
  scanf("%d", &cards[records].number_tourist_attractions);

  printf("\n--- Cartas Cadastradas ---\n");
  int i = 0;
  printf("\n--- Carta %d ---\n", i + 1);
  printf("Estado: %c\n", cards[i].state);
  printf("Código: %s\n", cards[i].card_code);
  printf("Nome da Cidade: %s", cards[i].city);
  printf("População: %d\n", cards[i].population);
  printf("Área: %2f km²\n", cards[i].area_in_square_kilometers);
  printf("PIB: %2f\n", cards[i].pib);
  printf("Número de Pontos Turísticos: %d\n", cards[i].number_tourist_attractions);
  printf("Densidade Populacional: %2f hab/km²\n", cards[i].population / cards[i].area_in_square_kilometers);
  printf("PIB per Capita: %2f reais\n", cards[i].pib / cards[i].population);

  i++;
  printf("\n--- Carta %d ---\n", i + 1);
  printf("Estado: %c\n", cards[i].state);
  printf("Código: %s\n", cards[i].card_code);
  printf("Nome da Cidade: %s", cards[i].city);
  printf("População: %d\n", cards[i].population);
  printf("Área: %2f km²\n", cards[i].area_in_square_kilometers);
  printf("PIB: %2f\n", cards[i].pib);
  printf("Número de Pontos Turísticos: %d\n", cards[i].number_tourist_attractions);
  printf("Densidade Populacional: %2f hab/km²\n", cards[i].population / cards[i].area_in_square_kilometers);
  printf("PIB per Capita: %2f reais\n", cards[i].pib / cards[i].population);
  
  return 0;
}