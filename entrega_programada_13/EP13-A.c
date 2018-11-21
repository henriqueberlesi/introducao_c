/* 
Entrega Programada 13 – A

Descrição: Manipulando Livros

Seja uma estrutura para descrever os livros de uma loja, contendo os seguintes campos:
- Título: string de tamanho 20
- Autor: string de tamanho 20
- Estilo: string de tamanho 10
- Código: inteiro
- Preço: real

a) Definir a estrutura livro

b) Escreva uma função que leia os dados de um livro e retorne a estrutura definida acima

c) Escreva uma função que receba uma estrutura do tipo livro e a imprima na tela.

d) Defina um vetor para armazenar os dados de 10 livros. Leia os dados dos 10 livros e
depois os imprima usando chamadas para as funções definidas em b) e c). 

*/

#include <stdio.h>

typedef struct {
    char title[20];
    char author[20];
    char category[10];
    int id;
    float price;
} book;

book newbook() {
    
    book B1;
    
    printf("Inform the book's ID:\n");
    scanf("%d", &B1.id);
    
    printf("Inform the book's Title:\n");
    fflush(stdin);
    gets(B1.title);
    
    printf("Inform the book's Author:\n");
    gets(B1.author);
    
    printf("Inform the book's Category:\n");
    gets(B1.category);
    
    printf("Inform the book's Price:\n");
    scanf("%f", &B1.price);

    return B1;
}

void printBook(book B1) {

    printf("ID: %d\n", B1.id);
    printf("Title: %s\n", B1.title);
    printf("Author: %s\n", B1.author);
    printf("Category: %s\n", B1.category);
    printf("Price: R$ %.2f\n", B1.price);

}

int main() {
    
    int i;
    book bookshelf[10];

    for (i = 0; i < 10; i++) {

        bookshelf[i] = newbook();
        printBook(bookshelf[i]);

    }
    
    return 0;
}
