#include <stdio.h>
#include <math.h>

double fact(int e) {
    if (e == 0 || e == 1)
        return 1;
    return e * fact(e - 1);
}

int main() {
    double deg, x, sum1 = 0, sum2=0;
    int n, i, e;

    printf("angle: ");
    scanf("%lf", &deg);
    x = 3.14 / 180 * deg;

    printf("terms: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        e = 2 * i + 1;
        sum1 += pow(-1, i) * pow(x, e) / fact(e);
    }
    for (i = 0; i < n; i++) {
        e = 2 * i;
        sum2 += pow(-1, i) * pow(x, e) / fact(e);
    }

    printf("\nApproximate sin(%lf) = %lf", deg, sum1);
    printf("\nApproximate cos(%lf) = %lf", deg, sum2);
    printf("\nActual sin(%lf) = %lf", deg, sin(x));
    printf("\nActual cos(%lf) = %lf", deg, cos(x));

    return 0;
}
