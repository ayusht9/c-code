// fibonacci series
// 0 1 1 2 3 5 8 11 19

#include <stdio.h>
int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int terms;
    printf("Enter the number of terms: ");
    scanf("%d", &terms);

    for (int i = 0; i < terms; i++)
        printf("%d ", fibonacci(i));

    return 0;
}
