# include <stdio.h>

int check_month() {
    int i;

    printf("Digite um mês (1-12):\n");
    scanf("%d", &i);

    if (i < 1 || i > 12 )
    {
        printf("Você digitou %d... Por favor, insira um mês válido (1-12)\n", i);
        return check_month();
        }
    else {
        return i;
    }
}


int is_leap_year()
{
    int year;

    printf("Digite um ano (maior que 0): \n");
    scanf("%d", &year);

    if (year < 0)
    {
        printf("Você digitou %d... Por favor, insira um ano válido (maior que 0)\n", year);
        return is_leap_year();
        }
    else {
        return year % 4 == 0 && (year % 100 != 0 || year % 400 == 0);
    }
}


int main()
{
    int month, leap_year, feb;

    leap_year = is_leap_year();
    month = check_month();

    if (leap_year == 1) {
        feb = 29;
        } else {
        feb = 28;
        }

    switch(month)
    {
        case 1:
            printf("Janeiro (31 dias)\n");
            break;
        case 2:
            printf("Fevereiro (%i dias)", feb);
            break;
        case 3:
            printf("Março (31 dias)\n");
            break;
        case 4:
            printf("Abril (30 dias)\n");
            break;
        case 5:
            printf("Maio (31 dias)\n");
            break;
        case 6:
            printf("Junho (30 dias)\n");
            break;
        case 7:
            printf("Julho (31 dias)\n");
            break;
        case 8:
            printf("Agosto (31 dias)\n");
            break;
        case 9:
            printf("Setembro (30 dias)\n");
            break;
        case 10:
            printf("Outubro (31 dias)\n");
            break;
        case 11:
            printf("Novembro (30 dias)\n");
            break;
        case 12:
            printf("Dezembro (31 dias)\n");
            break;
        default:
            printf("Valor inválido!\n");
            break;
    }
}
