# include <stdio.h>

int main() {
    float values[20];
    int i;

    for (i=0; i<20; i++) {
        printf("Inform value #%i:\n", i+1);
        scanf("%f", &values[i]);
    }

    for (i=20; i>0; i--) {
        printf("%.2f\n", values[i-1]);
    }
}
