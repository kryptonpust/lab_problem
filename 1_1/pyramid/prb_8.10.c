/*
A
AB
ABC
*/
#include <stdio.h>

int main()
{
    int i,j,k;
    char a;
    scanf("%d",&k);
    for(i=1; i<=k; i++)
    {
        for(j=1,a='A'; j<=i; j++,a++)
        {
            printf("%c ",a);
        }
        printf("\n");
    }
    return 0;
}



