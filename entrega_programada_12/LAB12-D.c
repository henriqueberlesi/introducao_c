/* Laboratório 12 – D

Descrição: Letras Intercaladas

Faça um programa que leia duas palavras de até 10 caracteres cada. Crie
então uma função que imprima uma string composta pelas duas palavras em
que os caracteres da primeira palavra sejam intercalados com a segunda.

Exemplo:
Com as palavras “bola” e “esfera” será imprimido na tela a string “beoslfaera”.

Dicas:

Devemos passar as palavras por referência para a função.

A função receberá as duas palavras, porém não retorna nenhum valor ao
programa.

Atenção:
O programa deverá obrigatoriamente usar funções. */

#include <stdlib.h>
#include <stdio.h>

char abc(char *word1, char *word2, char *merged) {
    int i ;
    
    while (*word1 != '\0' && *word2 != '\0') {
        *merged++ = *word1++;
        *merged++ = *word2++;
    }
    while (*word1 != '\0') {
        *merged++ = *word1++;
    }
    while (*word2 != '\0') {
        *merged++ = *word2++;
    }
    *merged = '\0';
}

int main() {
    char word1[11], word2[11], merged[22];
    
    printf("Word1? \n");
    gets(word1);
    printf("Word2? \n");
    gets(word2);
    abc(word1, word2, merged);
    puts(merged);
    
    return 0;
}