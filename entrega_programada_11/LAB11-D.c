#include <stdio.h>
#include <stdlib.h>

int printer(char character, int lines, int columns) {
    int l, c;
    
    for (l=0; l < lines; l++) {
        for (c = 0; c < columns; c++) {
          printf("%c", character);
        };
        printf("\n");        
    }
       
    return 0;
};


int main() {
    char character;
    int columns, lines;

    printf("Please digit ONE character to print:\n");
    scanf("%c", &character);
    printf("Please digit how many COLUMNS:\n");
    scanf("%d", &columns);
    printf("Please digit how many LINES:\n");
    scanf("%d", &lines);

    printer(character, lines, columns);
    return 0;
}
