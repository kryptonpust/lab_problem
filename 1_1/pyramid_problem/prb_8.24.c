/*
    1
  1 0
3 0 1
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
    for(i=0-input; i<0; i++)
    {
        gotoxy(abs(i));
        int len=input-abs(i);
        for(j=0,num=1; j<=len; j++,num++)
        {
            printf(" %d",num%2);
        }
    }
}



