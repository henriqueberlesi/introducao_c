/* Entrega Programada 12 – C

Descrição: Média Aparada

Faça um programa para calcular a média aparada das notas reais
de 5 alunos. A média aparada deve ser calculada descartando a
maior e a menor nota. Para isso, crie uma função que localize e
retorne o maior valor e uma outra função para localizar e retornar o
menor valor de um vetor. Então calcule a média aparada. A média
deve ser impressa com duas casas decimais.

Dicas:
Podemos fazer 3 funções.

- min_value() que recebe o vetor e retorna o menor valor contido nele.

- max_value() que recebe o vetor e retorna o maior valor contido nele.

- MediaAparada(), que recebe o vetor, chama as duas outras funções para descobrir
quais são os valores extremos, calcula e retorna a média aparada.

Se houverem várias notas empatadas como maior ou menor nota deve-se
desconsiderar todas.

Atenção:
O programa deverá obrigatoriamente usar funções. */

#include <stdio.h>

int min(int *array) {
    int min_value, i;

    min_value = array[0];
    for (i = 0; i < 5; i++) {
        if (min_value > array[i]) {
            min_value = array[i];
        }
    }

    return min_value;
}

int max(int *array) {
    int max_value, i;

    max_value = array[0];
    for (i = 0; i < 5; i++) {
        if (max_value < array[i]) {
            max_value = array[i];
        }
    }

    return max_value;
}

int fixed_avg(int *array) {

    int min_value, max_value, i, sum = 0;
    float pos, avg;

    min_value = min(array);
    max_value = max(array);
    pos = 0.;
    
    for (i = 0; i < 15; i++) {
        if (array[i] != min_value && array[i] != max_value) {
            sum = sum + array[i];
            pos++;
        }
    }
    avg = sum / pos;
    printf("%.2f", avg);
    ;
}


int main() {

    int grades[] = {1,2,3,4,5,6,7,1,2,3,4,5,6,7,8};
    fixed_avg(grades);

    return 0;
}