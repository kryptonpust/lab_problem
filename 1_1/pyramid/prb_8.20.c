/*
ABC
AB
A
*/
#include <stdio.h>

int main()
{
    int i,j,k;
    scanf("%d",&k);
    char a;
    for(i=k; i>=1; i--)
    {
        for(j=1,a='A'; j<=i; j++,a++)
        {
            printf("%c ",a);
        }
        printf("\n");
    }
    return 0;
}





