/*
    1
  1 2 1
1 2 3 2 1
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
    int input;
    scanf("%d",&input);
    int num=input,i;
    num--;
    for(i=0-num;i<=0;i++)
    {
        gotoxy(abs(i));
        int first=input-abs(i),x=first,j;
        x--;
        for(j=0-x;j<=x;j++)
        {
        printf("%d ",first-abs(j));
        }
    }
}


