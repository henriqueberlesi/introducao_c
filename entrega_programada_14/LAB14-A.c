/*

Laboratório 14 – A

Descrição: Contagem no arquivo

Faça um programa que crie um arquivo texto em disco, com o nome “dados.txt”, e
escreva neste arquivo em disco uma contagem inteira de 1 até 100, com um número em
cada linha.

*/

#include <stdio.h>

int main() {
    
    FILE * output;
    int i;

    output = fopen("output.txt", "w");
    
    for (i = 1; i < 101; i++) {
        fprintf(output, "%d\n", i);
    }
    fclose(output);


    return 0;
}
