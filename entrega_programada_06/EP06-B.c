#include <stdio.h>

int main() {

    int n, i, divisors = 0;

    do {
        printf("Please inform a number: \n");
        scanf("%i", &n);
    } while (n <= 0);

    for (i = n; i > 0; i--) {
        if (n % i == 0 && n != i) {
            divisors = divisors + i;
        }
    }

    if (divisors == n) {
        printf("The number %i is perfect. It's divisor's sum it's %i", n, divisors);
    } else {
        printf("The number %i is not perfect. It's divisor's sum it's %i", n, divisors);
    }
}
