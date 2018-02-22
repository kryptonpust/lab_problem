/*prb 7.4 -> 4+12+20+28.....upto nth term */
#include <stdio.h>

int main()
{
    int i, n, t, result = 0; //using variable t to calculate term and variable i to generating series
    scanf("%d",&n);
    for(t=1,i=4;t<=n;t++,i+=8) //i=i+8
    {
        result+=i; //result=result+i
    }
    printf("result is %d",result);
  return 0;
}
