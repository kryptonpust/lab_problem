/*prb 7.5 -> 2+5+8+11......upto nth term */
#include <stdio.h>

int main()
{
    int i, n, t, result = 0; //using variable t to calculate term and variable i to generating series
    scanf("%d",&n);
    for(t=1,i=2;t<=n;t++,i+=3) //i=i+3
    {
        result+=i; //result=result+i
    }
    printf("result is %d",result);
  return 0;
}

