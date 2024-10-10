#include <stdio.h>

_Bool in_the_middle_of_a_word = 0;

unsigned char
CountTheNumberOfWordsInAGivenSentence(const char *a_given_sentence) {
  if (*a_given_sentence == '\0' && in_the_middle_of_a_word) {
    return (1);
  } else {
    if (*a_given_sentence == '\0') {
      return (0);
    } else {
      if (*a_given_sentence > 32 && *a_given_sentence < 127) {
        in_the_middle_of_a_word = 1;
        return (CountTheNumberOfWordsInAGivenSentence(a_given_sentence + 1));
      } else {
        if (*a_given_sentence == ' ' && in_the_middle_of_a_word) {
          in_the_middle_of_a_word = 0;
          return (1 +
                  CountTheNumberOfWordsInAGivenSentence(a_given_sentence + 1));
        } else {
          return (CountTheNumberOfWordsInAGivenSentence(a_given_sentence + 1));
        }
      }
    }
  }
}

int main() {

  printf("The number of words in a given sentence: %hhu\n",
         CountTheNumberOfWordsInAGivenSentence("a given sentence."));

  return (0);
}
