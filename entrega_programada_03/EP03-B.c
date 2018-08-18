# include <stdio.h>

int main() {

    float A1, A2, A3;

    printf("Insira a altura em centimetros da primeira pessoa:\n");
    scanf("%f", &A1);
    printf("Insira a altura em centimetros da segunda pessoa:\n");
    scanf("%f", &A2);
    printf("Insira a altura em centimetros da terceira pessoa:\n");
    scanf("%f", &A3);

    int menor_150 = 0;
    int maior_150 = 0;
    float media_altura = (A1 + A2 + A3) / 3 / 100;

    if (A1 < 150) {
        menor_150 ++;
    } else {
    maior_150 ++;
    };

    if (A2 < 150) {
        menor_150 ++;
    } else {
    maior_150 ++;
    };

    if (A3 < 150) {
        menor_150 ++;
    } else {
    maior_150 ++;
    };

    if (menor_150 == 0) {
        printf("\nNão há nenhuma pessoa com menos de 1.5m\n");
    } else {
        printf("\nHá %i pessoa(s) com menos de 1.5m\n", menor_150);
    }

    if (maior_150 == 0) {
        printf("Não há nenhuma pessoa com ou com mais de 1.5m\n\n");
    } else {
        printf("Enquanto há %i pessoa(s) com ou com mais de 1.5m\n\n", maior_150);
    }
    printf("A media de altura das pessoas é %.2fm\n", media_altura);

    if (media_altura > 1.5) {
        printf("Nesse caso, a média é superior à 1.5m\n");
    } else if (media_altura == 1.5) {
        printf("Nesse caso, a média não está nem acima nem abaixo de 1.5m\n");
    } else {
        printf("Nesse caso, a média é inferior à 1.5m\n");
    }
}
