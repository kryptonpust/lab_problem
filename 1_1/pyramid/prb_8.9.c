/*
A
BB
CCC
*/
#include <stdio.h>

int main()
{
    int i,j,k;
    char a='A';
    scanf("%d",&k);
    for(i=1; i<=k; i++,a++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%c ",a);
        }
        printf("\n");
    }
    return 0;
}


