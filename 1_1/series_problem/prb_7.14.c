/*prb 7.14 -> 1.3.7+3.5.7.9+5.7.9.11.....upto nth term */
#include <stdio.h>

int main() {
    int i, n, t, k, result = 0; //using variable t to calculate term and variable i,k to generating series
    scanf("%d", &n);
    for (t = 1, k = 3, i = 1; t <= n; t++, i += 2, k += 2) {
        int x, z, j;
        for (x = 7, z = 1, j = 1; z <= t; z++, x += 2) { //using another loop to calculate series ..7+..7.9+..7.9.11+.....
            j *= x;
        }
        result += (i * k * j); //result=result+(i*k*j)
    }
    printf("result is %d", result);
    return 0;
}
