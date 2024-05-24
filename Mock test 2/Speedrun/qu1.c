#include <stdio.h>
#include <stdlib.h>

int main() {
    char* string = (char*)malloc(1 * sizeof(char));
    char character;
    int length = 1;

    printf("Input a string: ");
    while(character != '\n') {
        character = getchar();
        string[length] = character;
        length++;
        string = (char*)realloc(string, (length + 1) * sizeof(char));
    }
    string[length] = '\0';

    for (int i = 0; i < length; i++) {
        if (string[i] == 's') {
            string[i] = '$';
        }
        if (string[i] == 'a') {
            string[i] = '@';
        }
        if (string[i] == 'o') {
            string[i] = '0';
        }
        if (string[i] == 'l') {
            string[i] = '1';
        }
        printf("%c", string[i]);
    }

    free(string);
    return(0);
}