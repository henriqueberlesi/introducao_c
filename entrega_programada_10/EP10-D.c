#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dice() {
    return rand() % 6 + 1;
}

int main() {
    /* Define a random seed based on current timestamp. */
    srand(time(NULL));
    
    int total[1000], ones = 0, twos = 0;
    int threes = 0, fours = 0, fives = 0;
    int sixes = 0, i, number = 0;
    float ones_pct = 0, twos_pct = 0, threes_pct = 0;
    float fours_pct = 0, fives_pct = 0, sixes_pct = 0;

    for (i = 0; i < 1000; i++) {
        number = dice();
        total[i] = number;
        switch(number) {
            case 1:
                ones++;
                break;
            case 2:
                twos++;
                break;
            case 3:
                threes++;
                break;
            case 4:
                fours++;
                break;
            case 5:
                fives++;
                break;
            case 6:
                sixes++;
                break;
            default:
                break;
        }
    }

    ones_pct = ones/1000. * 100;
    twos_pct = twos/1000. * 100;
    threes_pct = threes/1000. * 100;
    fours_pct = fours/1000. * 100;
    fives_pct = fives/1000. * 100;
    sixes_pct = sixes/1000. * 100;

    printf("Ones: %i (%.2f%%)\n", ones, ones_pct);
    printf("Twos: %i (%.2f%%)\n", twos, twos_pct);
    printf("Threes: %i (%.2f%%)\n", threes, threes_pct);
    printf("Fours: %i (%.2f%%)\n", fours, fours_pct);
    printf("Fives: %i (%.2f%%)\n", fives, fives_pct);
    printf("Sixes: %i (%.2f%%)\n", sixes, sixes_pct);
    
    return 0;
}