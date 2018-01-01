/*
111
00
1
*/
#include <stdio.h>

int main()
{
    int i,j,k;
    scanf("%d",&k);
    for(i=k; i>=1; i--)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d ",i%2);
        }
        printf("\n");
    }
    return 0;
}





