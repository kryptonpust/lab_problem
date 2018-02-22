/*
find combination*/

#include <stdio.h>

double permu(double n, double r, double x) {
    if (n == 1)
        return 1;
    if (r == 0)
        r = 1;
    if (x == 0)
        x = 1;
    double a = n / (r * x);
    return a * permu(n - 1, r - 1, x - 1);
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", (int) permu(a, a - b, b));
}