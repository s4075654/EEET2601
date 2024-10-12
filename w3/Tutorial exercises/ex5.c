#include <stdio.h>

unsigned char PromptTheUserToEnterAnIntegerBetween1And15() {
  unsigned char an_integer;

  printf("Enter an integer between 1 and 15: ");
  scanf("%hhu", &an_integer);

  return (an_integer);
}

void DisplayTheSpaces(unsigned char an_integer, unsigned char row) {
  for (unsigned char space = 0; space <= an_integer - row - 1; ++space) {
    printf("%4c", ' ');
  }
}

void DisplayTheLeftSide(unsigned char row) {
  if (row == 1) {
    return;
  } else {
    printf("%4hhu", row);
    return (DisplayTheLeftSide(row - 1));
  }
}

void DisplayTheRightSide(unsigned char row) {
  for (unsigned char right_side = 2; right_side <= row; ++right_side) {
    printf("%4hhu", right_side);
  }
}

void DisplayAPyramidPattern(unsigned char an_integer) {

  for (unsigned char row = 1; row <= an_integer; ++row) {
    DisplayTheSpaces(an_integer, row);
    DisplayTheLeftSide(row);
    printf("%4hhu", 1);
    DisplayTheRightSide(row);
    printf("\n");
  }
}

int main() {

  DisplayAPyramidPattern(PromptTheUserToEnterAnIntegerBetween1And15());

  return (0);
}