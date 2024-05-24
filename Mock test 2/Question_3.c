#include <stdio.h>
#include <string.h>

char *months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", 
"October", "November", "December"};

char* ProduceTheString(char* src, char* dest) {
    _Bool last_three_months = 0;
    char yyyy[4], *year = yyyy;

    for (char character = 0; character < 10; ++character) {
        if (character >= 0 && character <= 1) {
            dest[character] = src[character];
        }
        if (character == 2) {
            dest[character] = ' ';
        }
        if (character == 3) {
            if (src[character] == '1') {
                last_three_months = 1;
            }
        }
        if (character == 4) {
            switch (last_three_months) {
                case 1:
                    if (src[character] == '0') {
                        strcat(dest, months[9]);
                        break;
                    }
                    if (src[character] == '1') {
                        strcat(dest, months[10]);
                        break;
                    }
                    if (src[character] == '2') {
                        strcat(dest, months[11]);
                        break;
                    }
                break;
                case 0:
                    strcat(dest, months[src[character] - 48 - 1]);
                    break;
            }
        }
        if (character == 5) {
            strcat(dest, " ");
        }
        if (character > 5) {
            *year = src[character];
            ++year;
        }
    }
    *year = '\0';
    strcat(dest, yyyy);

    return(dest);
}

int main() {
    char source[10];
    char dest[17];

    printf("Enter the source string in the format \"dd/mm/yyyy\": ");
    scanf("%s", source);
    printf("%s", ProduceTheString(source, dest));

    return(0);
}