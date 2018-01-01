/*
345
23
1
*/
#include <stdio.h>

int main()
{
    int i,j,k,l;
    scanf("%d",&k);
    for(i=k; i>=1; i--)
    {
        for(j=1,l=i; j<=i; j++,l++)
        {
            printf("%d ",l);
        }
        printf("\n");
    }
    return 0;
}







