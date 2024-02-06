// factorial of x
// 5!=5*4*3*2*1

#include <stdio.h>
long factorial(int x);

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n < 0)
        printf("Not defined\n");
    else {
        long result = factorial(n);
        printf("Factorial=%ld\n", result);
    }
    return 0;
}

long factorial(int x) {
    if (x == 0 || x == 1)
        return 1;
    else
        return x * factorial(x - 1);
}
