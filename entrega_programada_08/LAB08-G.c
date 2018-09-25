#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    /* Define a random seed based on current timestamp. */
    srand(time(NULL));

    int sum_a = 0, sum_b = 0, score_a, score_b, i;


    for (i = 0; i < 5; i++) {
       score_a = rand() % 100 + 1;
       score_b = rand() % 100 + 1;
       printf("Boxer A score was %d\n", score_a);
       printf("Boxer B score was %d\n\n", score_b);
       sum_a = sum_a + score_a;
       sum_b = sum_b + score_b;
    }

    if (sum_a > sum_b) {
        printf("Boxer A won! Score: %d", sum_a);
    } else {
        if (sum_a < sum_b) {
            printf("Boxer B won! Score: %d", sum_b);
        } else {
            printf("Draw!");
        }
    }

    return 0;
}
