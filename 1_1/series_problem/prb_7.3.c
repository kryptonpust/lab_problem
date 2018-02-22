/*prb 7.3 -> 1+3+5+7.....upto nth term */
#include <stdio.h>

int main()
{
    int i, n, t, result = 0; //using variable t to calculate term and variable i to generating series
    scanf("%d",&n);
    for(t=1,i=1;t<=n;t++,i+=2) //i=i+2
    {
        result+=i; //result=result+i
    }
    printf("result is %d",result);
  return 0;
}
