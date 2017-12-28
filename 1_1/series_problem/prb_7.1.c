/* prb 7.1 ->> 1+2+3......upto nth term */
#include <stdio.h>

int main()
{
    int i,n,result=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        result+=i;//result=result+i
    }
    printf("result is %d",result);
    return 0;
}
