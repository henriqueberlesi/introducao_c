#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

int main() {

    char input[100], inverted[100];
    int i, x = 0;

    fflush(stdin);
    gets(input);

    i = strlen(input);

    while (i >= 0) {
        inverted[x] = input[i-1];
        i--;
        x++;
    }

    inverted[x] = '\0';

    printf("Input: %s\n", input);
    printf("Output: %s\n", inverted);

    if (strcmp(input, inverted) == 0) {
        printf("The keywork is a palindrome\n");
    } else {
        printf("The keywork is NOT a palindrome\n");
    }



    return 0;
}
