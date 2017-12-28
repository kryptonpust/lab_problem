/*
   A
  B B
 C C C
 */
#include <stdio.h>
#include <stdlib.h>

void gotoxy(int x)
{
    printf("\n");
    while(x--)
        printf(" ");
}
int main()
{
    int input,i,j,num=65;
    scanf("%d",&input);
    for(i=0-input; i<0; i++,num++)
    {
        gotoxy(abs(i));
        int len=input-abs(i);
        for(j=0; j<=len; j++)
        {
            printf("%c ",num);
        }
    }
}




