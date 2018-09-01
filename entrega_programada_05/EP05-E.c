# include <stdio.h>

int evaluate_winner(int inter, int gremio) {
    if (inter > gremio) {
        return 1;
    } if (inter < gremio) {
        return -1;
    } else {
        return 0;
    }
}

int main() {
    int inter_wins, gremio_wins, draws, new_game, inter_score, gremio_score;

    /* Initialize the variables correctly */
    inter_wins = 0;
    gremio_wins = 0;
    draws = 0;
    new_game = 0;
    inter_score = 0;
    gremio_score = 0;
    new_game = 1;


    while (new_game == 1)
    {
        printf("Digite o resultado do Inter:\n");
        scanf("%d", &inter_score);
        printf("Digite o resultado do Gremio:\n");
        scanf("%d", &gremio_score);

        switch (evaluate_winner(inter_score, gremio_score))
        {
            case 1:
                inter_wins++;
                break;
            case -1:
                gremio_wins++;
                break;
            case 0:
                draws++;
                break;
        }

        printf("Novo jogo? (1- sim, 2- não):\n");
        scanf("%d", &new_game);
    }

    printf("\nNúmero de Grenais: %d\n", inter_wins + gremio_wins + draws);
    printf("Vitórias do Internacional: %d\n", inter_wins);
    printf("Vitórias do Grêmio: %d\n", gremio_wins);
    printf("Número de Empates: %d\n", draws);

    switch (evaluate_winner(inter_wins, gremio_wins)) {
        case 1:
            printf("Inter venceu o maior número de Grenais\n");
            break;
        case -1:
            printf("Grêmio venceu o maior número de Grenais\n");
            break;
        case 0:
            printf("Não houve vencedor\n");
            break;
    }

    return 0;
}
