# include <stdio.h>

int main()
{
    float Kph, Mph;

    printf("Vai viajar para a Liberia, Birmania, Reino Unido ou Estados Unidos? Utilize o conversor abaixo!\n");
    printf("Digite sua velocidade em Kph:\n");
    scanf("%f", &Kph);

    Mph = Kph / 1.609344;

    printf("\nKph: %.2f\n", Kph);
    printf("Mph: %.2f", Mph);
}
