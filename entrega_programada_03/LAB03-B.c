# include <stdio.h>

int main()
{
    float N1, N2;

    printf("Digite a nota da primeira prova:\n");
    scanf("%f", &N1);
    printf("Digite a nota da segunda prova:\n");
    scanf("%f", &N2);

    float media = (N1 + N2) / 2;

    if (media >= 6) {
    printf("Parabens, voce passou com a media %.2f!", media);
    } else {
    printf("Infelizmente voce nao passou :/ Sua media ficou em %.2f!", media);
    }
}
