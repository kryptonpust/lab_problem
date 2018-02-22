/*prb 7.8 -> 2.1+5.3+8.5......upto nth term */
#include <stdio.h>

int main()
{
    int i, n, t, k, result = 0; //using variable t to calculate term and variable i,k to generating series
    scanf("%d",&n);
    for(t=1,k=3,i=1;t<=n;t++,i+=2,k+=2)
    {
        result+=(i*k); //result=result+(i*k)
    }
    printf("result is %d",result);
  return 0;
}
