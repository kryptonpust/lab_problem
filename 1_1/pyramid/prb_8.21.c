/*
    1
  2 2
3 3 3
 */
#include <stdio.h>
#include <stdlib.h>

void gotoxy(int x)
{
    printf("\n");
    while(x--)
        printf("  ");
}
int main()
{
    int input,i,j,num=1;
    scanf("%d",&input);
    for(i=0-input; i<0; i++,num++)
    {
        gotoxy(abs(i));
        int len=input-abs(i);
        for(j=0; j<=len; j++)
        {
            printf(" %d",num);
        }
    }
}


