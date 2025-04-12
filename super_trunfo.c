#include <stdio.h>
 
struct Card {
  char state;
  char card_code[4]; //O index é 4, pois em char sempre irá adicionar o \n, então seria A01\n
  char city[50];
  unsigned long int population;
  float area_in_square_kilometers;
  float pib;
  int number_tourist_attractions;
  float population_density;
  float pib_per_capita;
  float super_power;
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
  scanf("%lu", &cards[records].population);

  printf("A área da cidade em quilômetros quadrados: ");
  scanf("%f", &cards[records].area_in_square_kilometers);

  printf("O Produto Interno Bruto da cidade: ");
  scanf("%f", &cards[records].pib);

  printf("A quantidade de pontos turísticos na cidade: ");
  scanf("%d", &cards[records].number_tourist_attractions);
  getchar(); //para remover \n  para não causar um bug no campo abaixo;

  cards[records].population_density = cards[records].population / cards[records].area_in_square_kilometers;
  cards[records].pib_per_capita = cards[records].pib / cards[records].population;
  cards[records].super_power = 
    cards[records].population + 
    cards[records].area_in_square_kilometers + 
    cards[records].pib + 
    cards[records].number_tourist_attractions + 
    cards[records].pib_per_capita - 
    cards[records].population_density;

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
  scanf("%lu", &cards[records].population);

  printf("A área da cidade em quilômetros quadrados: ");
  scanf("%f", &cards[records].area_in_square_kilometers);

  printf("O Produto Interno Bruto da cidade: ");
  scanf("%f", &cards[records].pib);

  printf("A quantidade de pontos turísticos na cidade: ");
  scanf("%d", &cards[records].number_tourist_attractions);

  cards[records].population_density = cards[records].population / cards[records].area_in_square_kilometers;
  cards[records].pib_per_capita = cards[records].pib / cards[records].population;
  cards[records].super_power = 
    cards[records].population + 
    cards[records].area_in_square_kilometers + 
    cards[records].pib + 
    cards[records].number_tourist_attractions + 
    cards[records].pib_per_capita - 
    cards[records].population_density;

  printf("\n--- Cartas Cadastradas ---\n");
  int i = 0;
  printf("\n--- Carta %d ---\n", i + 1);
  printf("Estado: %c\n", cards[i].state);
  printf("Código: %s\n", cards[i].card_code);
  printf("Nome da Cidade: %s\n", cards[i].city);
  printf("População: %lu\n", cards[i].population);
  printf("Área: %2f km²\n", cards[i].area_in_square_kilometers);
  printf("PIB: %2f\n", cards[i].pib);
  printf("Número de Pontos Turísticos: %d\n", cards[i].number_tourist_attractions);
  printf("Densidade Populacional: %2f hab/km²\n", cards[i].population_density);
  printf("PIB per Capita: %2f reais\n", cards[i].pib_per_capita);
  printf("Super poder: %2f\n", cards[i].super_power);

  i++;
  printf("\n--- Carta %d ---\n", i + 1);
  printf("Estado: %c\n", cards[i].state);
  printf("Código: %s\n", cards[i].card_code);
  printf("Nome da Cidade: %s\n", cards[i].city);
  printf("População: %lu\n", cards[i].population);
  printf("Área: %2f km²\n", cards[i].area_in_square_kilometers);
  printf("PIB: %2f\n", cards[i].pib);
  printf("Número de Pontos Turísticos: %d\n", cards[i].number_tourist_attractions);
  printf("Densidade Populacional: %2f hab/km²\n", cards[i].population_density);
  printf("PIB per Capita: %2f reais\n", cards[i].pib_per_capita);
  printf("Super poder: %2f\n", cards[i].super_power);
  
  printf("\n---  Comparação de Cartas: ---\n");

  //#region Compara o atributo entre os dois primeiros cards: retorna 1 se o primeiro card vencer, 0 se perder, ou -1 em caso de empate.
  int first_card_win_population = (cards[0].population > cards[1].population) ? 1 : (cards[0].population < cards[1].population) ? 0 : -1; 
  printf("População: Carta %d venceu (%d)\n", ((first_card_win_population == 0) ? 2 : 1), first_card_win_population);

  int first_card_win_area = (cards[0].area_in_square_kilometers > cards[1].area_in_square_kilometers) ? 1 : (cards[0].area_in_square_kilometers < cards[1].area_in_square_kilometers) ? 0 : -1; 
  printf("Área: Carta %d venceu (%d)\n", ((first_card_win_area == 0) ? 2 : 1), first_card_win_area);

  int first_card_win_pib = (cards[0].pib > cards[1].pib) ? 1 : (cards[0].pib < cards[1].pib) ? 0 : -1; 
  printf("PIB: Carta %d venceu (%d)\n", ((first_card_win_pib == 0) ? 2 : 1), first_card_win_pib);

  int first_card_win_number_tourist_attractions = (cards[0].number_tourist_attractions > cards[1].number_tourist_attractions) ? 1 : (cards[0].number_tourist_attractions < cards[1].number_tourist_attractions) ? 0 : -1; 
  printf("Pontos Turísticos: Carta %d venceu (%d)\n", ((first_card_win_number_tourist_attractions == 0) ? 2 : 1), first_card_win_number_tourist_attractions);

  // Retorna 1 se o segundo card vence, 0 se o primeiro vence e -1 em caso de empate.
  int first_card_win_population_density = (cards[0].population_density < cards[1].population_density) ? 1 : (cards[0].population_density > cards[1].population_density) ? 0 : -1; 
  printf("Densidade Populacional: Carta %d venceu (%d)\n", ((first_card_win_population_density == 0) ? 2 : 1), first_card_win_population_density);

  int first_card_win_pib_per_capita = (cards[0].pib_per_capita > cards[1].pib_per_capita) ? 1 : (cards[0].pib_per_capita < cards[1].pib_per_capita) ? 0 : -1; 
  printf("PIB per Capita: Carta %d venceu (%d)\n", ((first_card_win_pib_per_capita == 0) ? 2 : 1), first_card_win_pib_per_capita);

  int first_card_win_super_power = (cards[0].super_power > cards[1].super_power) ? 1 : (cards[0].super_power < cards[1].super_power) ? 0 : -1; 
  printf("Super poder: Carta %d venceu (%d)\n", ((first_card_win_super_power == 0) ? 2 : 1), first_card_win_super_power);
  //#endregion

  int selectedAttribute;
  printf("\nEscolha um atributo para comparação:\n");
  printf("1. População\n");
  printf("2. Área\n");
  printf("3. PIB\n");
  printf("4. Número de pontos turísticos\n");
  printf("5. Densidade demográfica\n");
  scanf("%d", &selectedAttribute);

  int winnerCardIndex;
  switch (selectedAttribute) {
    case 1:        
      printf("\n--- Comparação de Cartas (Atributo: População): ---\n");
      printf("Carta 1 - %s: %lu\n", cards[0].city, cards[0].population);
      printf("Carta 2 - %s: %lu\n", cards[1].city, cards[1].population);
      if(first_card_win_population == -1) {
        printf("Resultado: Empate!");
        break;
      }
      winnerCardIndex = ((first_card_win_population == 0) ? 1 : 0);
      printf("Resultado: Carta %d (%s) venceu! \n", ((first_card_win_population == 0) ? 2 : 1), cards[winnerCardIndex].city);
      break;
    case 2:
      printf("\n--- Comparação de Cartas (Atributo: Área): ---\n");
      printf("Carta 1 - %s: %2f\n", cards[0].city, cards[0].area_in_square_kilometers);
      printf("Carta 2 - %s: %2f\n", cards[1].city, cards[1].area_in_square_kilometers);
      if(first_card_win_area == -1) {
        printf("Resultado: Empate!");
        break;
      }
      winnerCardIndex = ((first_card_win_area == 0) ? 1 : 0);
      printf("Resultado: Carta %d (%s) venceu! \n", ((first_card_win_area == 0) ? 2 : 1), cards[winnerCardIndex].city);
      break;
    case 3:
      printf("\n--- Comparação de Cartas (Atributo: PIB): ---\n");
      printf("Carta 1 - %s: %2f\n", cards[0].city, cards[0].pib);
      printf("Carta 2 - %s: %2f\n", cards[1].city, cards[1].pib);
      if(first_card_win_pib == -1) {
        printf("Resultado: Empate!");
        break;
      }
      winnerCardIndex = ((first_card_win_pib == 0) ? 1 : 0);
      printf("Resultado: Carta %d (%s) venceu! \n", ((first_card_win_pib == 0) ? 2 : 1), cards[winnerCardIndex].city);
      break;
    case 4:
      printf("\n--- Comparação de Cartas (Atributo: Número de pontos turísticos): ---\n");
      printf("Carta 1 - %s: %d\n", cards[0].city, cards[0].number_tourist_attractions);
      printf("Carta 2 - %s: %d\n", cards[1].city, cards[1].number_tourist_attractions);
      if(first_card_win_number_tourist_attractions == -1) {
        printf("Resultado: Empate!");
        break;
      }
      winnerCardIndex = ((first_card_win_number_tourist_attractions == 0) ? 1 : 0);
      printf("Resultado: Carta %d (%s) venceu! \n", ((first_card_win_number_tourist_attractions == 0) ? 2 : 1), cards[winnerCardIndex].city);
      break;
    case 5:
      printf("\n--- Comparação de Cartas (Atributo: Densidade demográfica): ---\n");
      printf("Carta 1 - %s: %2f\n", cards[0].city, cards[0].population_density);
      printf("Carta 2 - %s: %2f\n", cards[1].city, cards[1].population_density);
      if(first_card_win_population_density == -1) {
        printf("Resultado: Empate!");
        break;
      }
      winnerCardIndex = ((first_card_win_population_density == 0) ? 1 : 0);
      printf("Resultado: Carta %d (%s) venceu! \n", ((first_card_win_population_density == 0) ? 2 : 1), cards[winnerCardIndex].city);
      break;
    default:
      printf("Opção inválida\n");
  }

  return 0;
}