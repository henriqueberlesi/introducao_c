# include <stdio.h>

/*

Minha primeira solução. Como o exercício pede pra usar o comando while, refiz o programa abaixo.


int somatorio(int n) {
    if (n == 0) {
        return 0;
    } else {
        return n + somatorio(n-1);
    }
}

int main() {
    int a, soma;

    printf("Digite um número:\n");
    scanf("%d", &a);
    printf("%d", somatorio(a));

    return 0;
}
*/

int somatorio(int n) {
    int soma = 0;
    while (n > 0) {
        soma = soma + n;
        n--;
    }
    return soma;
}

int main() {
    int a, soma;

    printf("Digite um número:\n");
    scanf("%d", &a);
    printf("O somatório de %d até 0 é %d", a, somatorio(a));

    return 0;
}
