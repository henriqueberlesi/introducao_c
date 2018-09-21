# include <stdio.h>

int main() {

    int votes[10] = {0,0,0,0,0,0,0,0,0,0}, n = 1, i, max_pos;
    float perc, sum = 0, max;

    while (n != 0) {
        printf("In who you want to vote?\n");
        scanf("%i", &n);

        if (n >= 1 && n <= 10) {
            votes[n-1]++;
            printf("Voted on number %i.\n", n);
        }
    }

    max = votes[0];
    max_pos = 1;

    for (i = 0; i < 10; i++) {
        if (votes[i] > max) {
            max = votes[i];
            max_pos = i+1;
        }
    }

    for (i = 0; i < 10; i++) {
        printf("Candidate %i, votes: %i\n", i+1, votes[i]);
        sum = sum + votes[i];
    }

    printf("Winner: %i, votes: %.0f\n", max_pos, max);
    perc = (max/sum)*100;
    printf("Winner got %.2f%% of votes", perc);
}
