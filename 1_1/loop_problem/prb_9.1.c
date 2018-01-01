//loop9.1 factorial problem.(arif)
#include <stdio.h>
int main()
{

    int a,s,d=1;
    scanf("%d",&a);
    for(s=a;s>0;s--){
        d=d*s;
    }
    printf("Factorial is : %d",d);
    return 0;
}
