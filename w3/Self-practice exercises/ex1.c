#include <stdio.h>

unsigned char PromptTheUserToEnterAnIntegerBetween1And15() {
    unsigned char an_integer;

    printf("Enter an integer between 1 and 15: ");
    scanf("%hhu", &an_integer);

    return(an_integer);
}

void Descending(unsigned char an_integer) {
    if (an_integer == 1) {
        return;
    }
    else {
        printf("%hhu ", an_integer);
        return(Descending(an_integer - 1));
    }
}

void Ascending(unsigned char an_integer) {
    for (unsigned char ascending = 2; ascending <= an_integer; ++ascending) {
        printf("%hhu ", ascending);
    }
}

void DisplayAPyramidWithAPattern(unsigned char an_integer) {

    if (an_integer == 0) {
        return;
    }
    else {
        Descending(an_integer);
        printf("%hhu ", 1);
        Ascending(an_integer);
        printf("\n");
        return(DisplayAPyramidWithAPattern(an_integer - 1));
    }
}

int main() {

    DisplayAPyramidWithAPattern(PromptTheUserToEnterAnIntegerBetween1And15());

    return 0;
}