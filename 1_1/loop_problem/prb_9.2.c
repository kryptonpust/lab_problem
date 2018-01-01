//loop 9.2 sum of digits (arif)
#include <stdio.h>
int main()
{

    int a,s,d=0;
    scanf("%d",&a);
    for(s=a;s>0;a=a/10){
        s=a%10;
        d=d+s;
    }
    printf("sum of digits is: %d",d);
    return 0;
}

