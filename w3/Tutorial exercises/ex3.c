#include <stdio.h>

void DisplayTheCharactersInTheEIESSEA2Table() {
  unsigned char characters = 33;

  while (characters <= 126) {
    for (unsigned char characters_per_line = 1; characters_per_line <= 15;
         ++characters_per_line) {
      printf("%c ", characters);
      ++characters;
      if (characters == 127) {
        break;
      }
    }
    printf("\n");
  }
}

int main() {

  DisplayTheCharactersInTheEIESSEA2Table();

  return (0);
}