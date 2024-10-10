#include <stdio.h>
#include <stdlib.h>

typedef struct {
  char *letters;
  unsigned long long int length;
} string;

string AskTheUserToInputAString() {
  string a_string;
  a_string.letters = malloc(1 * sizeof(char));
  char letter;
  a_string.length = 0;

  printf("Input a string which may contain spaces: ");
  while (letter != '\n') {
    letter = getchar();
    a_string.letters[a_string.length] = letter;
    a_string.length++;
    a_string.letters =
        realloc(a_string.letters, (a_string.length + 1) * sizeof(char));
  }
  a_string.letters[a_string.length] = '\0';

  return (a_string);
}

char *ModifyThatStringWithCharacterSubstitution(string a_string) {

  for (unsigned long long int letter = 0; letter < a_string.length; ++letter) {
    if (a_string.letters[letter] == 's') {
      a_string.letters[letter] = '$';
    }
    if (a_string.letters[letter] == 'a') {
      a_string.letters[letter] = '@';
    }
    if (a_string.letters[letter] == 'l') {
      a_string.letters[letter] = '1';
    }
    if (a_string.letters[letter] == 'O') {
      a_string.letters[letter] = '0';
    }
  }

  return (a_string.letters);
}

int main() {
  string a_string = AskTheUserToInputAString();

  printf("%s", ModifyThatStringWithCharacterSubstitution(a_string));

  return (0);
}