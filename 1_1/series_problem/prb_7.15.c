/*prb 7.15 -> 2.5.8+5.8.11+8.11.14......upto nth term */
#include <stdio.h>

int main() {
    int i, n, t, k, j, result = 0; //using variable j to calculate term and variable i,k,t to generating series
    scanf("%d", &n);
    for (t = 2, k = 5, i = 8, j = 1; j <= n; j++, t += 3, i += 3, k += 3) {
        result += (i * k * t); //result=result+(i*k*t)
    }
    printf("result is %d", result);
    return 0;
}
