#include <stdio.h>
#include <stdlib.h>



int validates_age(int age) {
    if (age < 4 || age > 14) {
        int newage;
        printf("Please inform a valid age:\n");
        scanf("%i", &newage);
        return validates_age(newage);
    }
    printf("Age is valid!\n");
    return age;
}

int calculate_max(int array[], int len){
    int i, max = array[0];
    for (i = 0; i < len; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }
    return max;
}

int calculate_min(int array[], int len){
    int i, min = array[0];
    for (i = 0; i < len; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    return min;
}

float calculate_avg(int array[], int len) {
    int i; 
    float avg = 0;
    for (i = 0; i < len; i++) {
        avg = avg + array[i];
    }
    return avg / len;
    }

int main() {

    int n[10], i = 0, max, min, age;
    float avg;

    while (i < 10) {
        printf("Inform a student's age:\n");
        scanf("%i", &age);
        n[i] = validates_age(age);
        i++;
    }
    
    max = calculate_max(n, 10);
    min = calculate_min(n, 10);
    avg = calculate_avg(n, 10);

    printf("Oldest student: %i\n", max);
    printf("Youngest student: %i\n", min);
    printf("Average age: %f\n", avg);

    return 0;
}