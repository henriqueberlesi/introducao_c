#include <stdio.h>
#include <stdlib.h>

int main() {

    float grades[4][6] = {0}, avg[6] = {0}, class_avg = 0;
    int low_grades, i, j;

    for (i = 0; i < 4; i++) {
        for (j = 0; j < 6; j++) {
            printf("Please inform Student %i P%i grade:\n", i, j);
            


    }

    printf("Hello world");

    for (i = 0; i < 6; i++) {
        if (avg[i] < class_avg) {
            low_grades++;
        }
    }
    
    printf("Students below average: %i \n ", low_grades);
    return 0;
}