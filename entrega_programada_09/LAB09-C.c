#include <stdio.h>
#include <stdlib.h>


int main () {

    int matriz[3][3] = {{0,0,0}, {0,0,0},{0,0,0}};
    int max[3] = {0, 0, 0};
    int i, j, value, column_max;

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            do {
            printf("Inform a value: \n");
            scanf("%d", matriz[i][j]); /* essa parte não funciona. preciso debugar no futuro */
            } while (matriz[i][j] > 30);
        }
   }

    for (j = 0; j < 3; j++) {
        for (i = 0; i < 3; i++) {

            value = matriz[i][j];
            column_max = max[j];

            if (value > column_max) {
                max[j] = value;
            }
        }

    }

    printf("%i", max[0]);
    printf("%i", max[1]);
    printf("%i", max[2]);

    return 0;
}
