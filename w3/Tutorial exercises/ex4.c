#include <stdio.h>

void PrintAMultiplicationTableNicely() {
    unsigned char multiplication_table[10][10];
    for (unsigned char row = 1; row <= 10; ++row) {
        for (unsigned char column = 1; column <= 10; ++column) {
            multiplication_table[row - 1][column - 1] = row * column;
        }
    }
    printf("%2c |", 'x');
    for (unsigned char x = 0; x < 10; ++x) {
        printf("%4hhu", multiplication_table[x][0]);
    }
    printf("\n");
    for (unsigned char x = 0; x <= 10; ++x) {
        printf("----");
    }
    printf("\n");
    for (unsigned char row = 0; row < 10; ++row) {
        printf("%2hhu |", multiplication_table[row][0]);
        for (unsigned char column = 0; column < 10; ++column) {
            printf("%4hhu", multiplication_table[row][column]);
        }
        printf("\n");
    }
}

int main() {

    PrintAMultiplicationTableNicely();

    return(0);
}