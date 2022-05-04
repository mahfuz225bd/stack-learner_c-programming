#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  int lucky_number, choosen_number, chance, is_loose;
  
  // init chance and is_loose (1 = true)
  chance = 3;
  is_loose = 1;

  // Set seed for rand()
  time_t t;
  srand((unsigned) time(&t));

  // Set random lucky number between 1 to 10
  lucky_number = rand() % 10 + 1;

  // Get choosen_number from user input while not matched (limited)
  while (chance > 0) {
    printf("Guess a Number from 1 to 10 (%d): ", chance);
    scanf("%d", &choosen_number);

    if (choosen_number == lucky_number) {
      printf("Congratulation! You have choose the correct answer.\n");
      is_loose = 0;
      break;
    }

    chance--;
  }

  if (is_loose) {
    printf("You have lose. Lucky number was %d", lucky_number);
  }

  return 0;
}