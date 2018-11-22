/*
Laboratório 13 – A

Descrição: Carro Estruturado

Declare uma estrutura para armazenar dados sobre carros, formado de
- Nome: 50 caracteres,
- Cavalos: Cavalos de potência (inteiro)
- Preço: float.

O programa deverá ler os dados sobre 5 carros, e um valor_máximo. No final o
programa deverá imprimir o nome dos carros com valor menor ou igual ao valor_máximo.

Dicas: Para limpar o buffer do teclado antes de ler cada novo dado, não esqueça de
usar o comando fflush(stdin);

*/

#include <stdio.h>
#include <stdlib.h>

typedef struct {
        char brand[50];
        int hp;
        float price;
    } car;

car buildCar() {
    
    car c;
    
    printf("What's the car BRAND?\n");
    scanf("%s", &c.brand);
    printf("And how many HP?\n");
    scanf("%d", &c.hp);
    printf("What's the car PRICE?\n");
    scanf("%f", &c.price);

    return c;

}

int main() {

    float max_price;
    int i;

    car cars[5];
    
    for (i = 0; i < 5; i++) {
        cars[i] = buildCar();
    }

    printf("Max Price?\n");
    scanf("%f", &max_price);

    
    for (i = 0; i < 5; i++) {
        if (cars[i].price <= max_price) {
            printf("%f\n", cars[i].price);
        }
    }


    return 0;
}