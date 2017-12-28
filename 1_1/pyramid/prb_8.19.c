/*
CCC
BB
A
*/
#include <stdio.h>

int main()
{
    int i,j,k;
    scanf("%d",&k);
    char a='A'+(k-1);
    for(i=k; i>=1; i--,a--)
    {
        for(j=1; j<=i; j++)
        {
            printf("%c ",a);
        }
        printf("\n");
    }
    return 0;
}






