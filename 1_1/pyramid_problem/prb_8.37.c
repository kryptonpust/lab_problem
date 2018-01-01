#include <stdio.h>


int main()
{
    int i,j,n,fnum;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        fnum=1;
        for(j=1; j<=i; j++)
        {
            printf("%d ",fnum);
            fnum=fnum*(i-j)/j;
        }
        printf("\n");
    }
}
