#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *AskTheUserToInputAString() {
  char *a_string;
  unsigned long int size = 0;

  printf("Input a string: ");
  getline(&a_string, &size, stdin);

  return (a_string);
}

char *ReplaceTheLowercaseCharactersByUppercaseAndViceVersa(char *a_string) {

  for (unsigned long long int character = 0; character < sizeof(a_string);
       ++character) {
    if (character[a_string] >= 97 && character[a_string] <= 122) {
      character[a_string] -= 32;
    } else if (character[a_string] >= 65 && character[a_string] <= 90) {
      character[a_string] += 32;
    }
  }

  return (a_string);
}

char *AskTheUserToEnterAnotherString() {
  char *another_string;
  unsigned long int size = 0;

  printf("Enter another string: ");
  getline(&another_string, &size, stdin);

  return (another_string);
}

typedef struct {
  char *a_searching_keyword;
  char *size;
} text;

text ASearchingKeyword() {
  text find_text;
  unsigned long int size = 0;

  printf("Enter a searching keyword: ");
  getline(&find_text.a_searching_keyword, &size, stdin);

  return (find_text);
}

char *TextForReplacement(text find_text) {
  char *text_for_replacement = (char *)malloc(sizeof(find_text.size));
  unsigned long int size = 0;

  printf("Enter text for replacement: ");
  getline(&text_for_replacement, &size, stdin);

  return (text_for_replacement);
}

void PrintOutTheStringAfterReplacement(char *another_string,
                                       char *a_searching_keyword,
                                       char *text_for_replacement) {
  char *a_searching_character = &0 [a_searching_keyword];

  while (*a_searching_character != '\0') {
    if (*a_searching_character == '\n') {
      *a_searching_character = '\0';
      break;
    }
    ++a_searching_character;
  }

  char *character = &0 [text_for_replacement];
  while (*character != '\0') {
    if (*character == '\n') {
      *character = '\0';
      break;
    }
    ++character;
  }
  if (strstr(another_string, a_searching_keyword) != NULL) {
    char *character_for_replacement = &0 [text_for_replacement];

    for (unsigned long long int character =
             strstr(another_string, a_searching_keyword) - another_string;
         character < sizeof(a_searching_keyword) - 1; ++character) {
      character[another_string] = *character_for_replacement;
      ++character_for_replacement;
    }
    return (PrintOutTheStringAfterReplacement(
        another_string, a_searching_keyword, text_for_replacement));
  } else {
    printf("The string after replacement: %s", another_string);

    free(another_string);
    free(a_searching_keyword);
    free(text_for_replacement);
  }
}

int main() {

  printf("Replaced the lowercase characters by uppercase and vice versa: %s",
         ReplaceTheLowercaseCharactersByUppercaseAndViceVersa(
             AskTheUserToInputAString()));
  char *another_string = AskTheUserToEnterAnotherString();
  text find_text = ASearchingKeyword();
  PrintOutTheStringAfterReplacement(another_string,
                                    find_text.a_searching_keyword,
                                    TextForReplacement(find_text));

  return (0);
}