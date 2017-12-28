/*
1
01
101
*/
#include <stdio.h>

int main()
{
    int i,j,k,l=1;
    scanf("%d",&k);
    for(i=1; i<=k; i++)
    {
        for(j=1; j<=i; j++,l++)
        {
            printf("%d ",l%2);
        }
        if(i>=2)
        l--;
        printf("\n");
    }
    return 0;
}


