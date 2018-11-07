/* 

Entrega Programada 11 – A

Descrição: Jan-Ken-Pon

Implementar um jogo de Pedra, Papel e Tesoura (jan-ken-pon). O usuário deve jogar uma das
opções, 1 para pedra, 2 para papel ou 3 para tesoura. O computador deve jogar também (um
número aleatório entre 1 e 3). Devem ser implementadas pelo menos 3 funções (além da main):

• Lê jogada (sem parâmetros, retorna um inteiro) - informa ao usuário quais são as opções de
jogada que ele pode fazer, lê a opção selecionada pelo usuário e verifica se ele informou uma
jogada válida (1, 2 ou 3). Ao final retorna o número da jogada feita pelo usuário.

• Imprime jogada (recebe uma jogada inteira, não retorna nada) - de acordo com a entrada
informada imprime na tela pedra, papel ou tesoura.

• Calcula resultado (recebe dois parâmetros, a jogada do usuário e a do computador,
retorna o resultado inteiro) - de acordo com as jogadas a função deve imprimir: “Papel cobre
pedra” ou “Tesoura corta papel” ou “Pedra amassa tesoura”. Ao final, a função "calcula resultado"
retorna, 1 em caso de empate, 2 para vitória do usuário ou 3 para vitória do computador.

A função principal (main) deve chamar as outras funções para fazer o jogo funcionar. Primeiro deve-se
ler a opção do usuário e gerar uma opção para o computador. Depois imprimir as duas jogadas.

Por fim calcular o resultado e dizer quem venceu ou se houve empate. Em caso de empate, iniciar
uma nova rodada.

Atenção:
O programa deverá obrigatoriamente usar funções.

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/* Define a random seed based on current timestamp. */
srand(time(NULL));

int read_play() {
    int play;
    printf("Choose a move: \n1- Rock \n2- Paper\n3- Scissors\n");
    scanf("%d", &play);
    return play;
};

int print_play(int play) {
    switch(play) {
        case 1:
            printf("Rock\n");
            return 0;
        case 2:
            printf("Paper\n");
            return 0;
        case 3:
            printf("Scissors\n");
            return 0;
    }
}

int match(int player1, int player2) {
    if (player1 == player2) {
        return 1;
    }
    if ((player1 == 1 && player2 == 3) || (player1 == 2 && player2 == 1) || (player1 == 3 && player2 == 2)) {
        return 2;
    }
    return 3;
}

int new_game() {
    int player1, player2, result;

    printf("Player 1\n");
    player1 = read_play();
    print_play(player1);

    printf("Player 2\n");
    player2 = rand() % 3 + 1;
    print_play(player2);

    result = match(player1, player2);
    switch(result) {
        case 1:
            printf("Draw. Starting a new round!\n");
            new_game();
            break;
        case 2:
            printf("Player1 won!\n");
            break;
        case 3:
            printf("Player2 won!\n");
            break;
    }
}

int main() {
    
    new_game();
    return 0;

}