#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <string.h>

char arr[] = {'R', 'M', 'I', 'T', 'U', 'n', 'i', 'v', 'e', 'r', 's', 'i', 't', 'y'};
char the_array_in_ascending_order[14];

void* SortTheArray(void* character) {
    char characters[2];

    characters[0] = *(char*)character;
    characters[1] = '\0';
    usleep(*(unsigned char*)character * 10000);
    strcat(the_array_in_ascending_order, characters);

    return(NULL);
}

char* AscendingOrder(char* the_array) {
    pthread_t thread[14];
    
    for (unsigned char character = 0; character < 14; ++character) {
        pthread_create(&character[thread], NULL, SortTheArray, (void*)&character[the_array]);
    }
    for (unsigned char character = 0; character < 14; ++character) {
        pthread_join(character[thread], NULL);
    }
    strcpy(the_array, the_array_in_ascending_order);

    return(the_array);
}

void PrintOutTheArray(char* the_array) {
    
    printf("Printing out the array: ");
    for (unsigned char character = 0; character < 14; ++character) {
        printf("%c ", character[the_array]);
    }
    printf("\n");
}

int main() {

    PrintOutTheArray(AscendingOrder(arr));

    return(0);
}