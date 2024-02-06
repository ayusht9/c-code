#include <stdio.h>
#include <math.h>

int main() {
    int n, i;
    double sum = 0.0, mean, sd = 0.0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    double data[n];
    
    printf("Enter elements:");

    for (i = 0; i < n; i++) {
        scanf("%lf", &data[i]);
        sum += data[i];
    }

    mean = sum / n;

    for (i = 0; i < n; i++) {
        sd += pow(data[i] - mean, 2);
    }
    
    sd = sqrt(sd / n);

    printf("Sum: %.2lf\n", sum);
    printf("Mean: %.2lf\n", mean);
    printf("Standard Deviation: %.2lf\n", sd);

    return 0;
}
