/*
1
2 2
3 3 3
2 2
1
 */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int input;
    scanf("%d",&input);
    int num=input,i;
    num--;
    for(i=0-num;i<=num;i++)
    {
        printf("\n");
        int first=input-abs(i),x;
        for(x=1;x<=first;x++)
        {
        printf("%d ",first);
        }
    }
}



