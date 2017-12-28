/*
456
34
2
*/
#include <stdio.h>

int main()
{
    int i,j,k,l;
    scanf("%d",&k);
    for(i=k; i>=1; i--)
    {
        for(j=1,l=i,l++; j<=i; j++,l++)
        {
            printf("%d ",l);
        }
        printf("\n");
    }
    return 0;
}






