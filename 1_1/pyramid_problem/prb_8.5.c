/*
2
34
456
*/
#include <stdio.h>

int main()
{
    int i,j,k,l=2;
    scanf("%d",&k);
    for(i=1; i<=k; i++)
    {
        for(j=1; j<=i; j++,l++)
        {
            printf("%d ",l);
        }
        if(i>=2)
        l--;
        printf("\n");
    }
    return 0;
}
