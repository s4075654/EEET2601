#include <stdio.h>
#include <stdlib.h>

unsigned short int Return1IfTheKeywordIsFoundInTheTextAnd0Otherwise(char* text, char* a_searching_keyword) {

    for (unsigned long long int character = 0; text[character] != '\0'; character++) {
        if (text[character] == a_searching_keyword[0]) {
            unsigned long long int a_searching_keyword_s_character = 0;
            while (text[character] == a_searching_keyword[a_searching_keyword_s_character]) {
                character++;
                a_searching_keyword_s_character++;

                if (a_searching_keyword[a_searching_keyword_s_character] == '\0') return(1);
            }
        }
    }

    return(0);
}

int main() {
    char *text = NULL, *a_searching_keyword = NULL;
    size_t length = 0;

    getline(&text, &length, stdin);
    getline(&a_searching_keyword, &length, stdin);
    printf("%hu", Return1IfTheKeywordIsFoundInTheTextAnd0Otherwise(text, a_searching_keyword));
    free(text);
    free(a_searching_keyword);

    return(0);
}