#include <stdio.h>
#include <stdlib.h>

int main() {

    float grades[4][6], avg[6], class_avg = 0;
    int low_grades, i, j;

    for (j = 0; j < 6; j++) {
        for (i = 0; i < 4; i++) {
            printf("Please inform Student %i P%i grade:\n", j+1, i+1);
            scanf("%f", &grades[i][j]);
        }

        avg[j] = (grades[0][j] + grades[1][j] + grades[2][j] + grades[3][j]) / 4;
    }

    class_avg = (avg[0] + avg[1] + avg[2] + avg[3] + avg[4] + avg[5]) / 6;

    for (i = 0; i < 6; i++) {
        if (avg[i] < class_avg) {
            low_grades++;
        }
    }
    printf("P1\tP2\tP3\tP4\tAVG\n");

    for (j = 0; j < 6; j++) {
        printf("%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n", grades[0][j], grades[1][j], grades[2][j], grades[3][j], avg[j]);
    }

    printf("Class average is: %.2f\n", class_avg);
    printf("Students below average: %i \n ", low_grades);
    return 0;
}