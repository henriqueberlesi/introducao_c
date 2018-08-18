
#include <stdio.h>

int main()
{
    float x, y, z;

    printf("Informe 3 numeros reais.\n");
    printf("1o: numero real:\n");
    scanf("%f", &x);

    printf("2o: numero real:\n");
    scanf("%f", &y);

    printf("3o: numero real:\n");
    scanf("%f", &z);

    float soma = x + y + z;
    float produto = x * y * z;

    printf("Soma dos numeros: %.2f\n", soma);
    printf("Produto dos numeros: %.2f\n", produto);
}