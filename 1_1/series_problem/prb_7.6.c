/*prb 7.6 -> 1.2+2.3+3.4......upto nth term */
#include <stdio.h>

int main()
{
    int i, n, t, k, result = 0; //using variable t to calculate term and variable i,k to generating series
    scanf("%d",&n);
    for(t=1,k=2,i=1;t<=n;t++,i++,k++)
    {
        result+=(i*k); //result=result+(i*k)
    }
    printf("result is %d",result);
  return 0;
}
