/*             1
            2  3  2
         3  4  5  4  3
      4  5  6  7  6  5  4
   5  6  7  8  9  8  7  6  5
6  7  8  9  0  1  0 9  8  7  6
   5  6  7  8  9  8  7  6  5
      4  5  6  7  6  5  4
         3  4  5  4  3
            2  3  2
               1
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
    for(i=0-num;i<=num;i++)
    {
        gotoxy(abs(i));
        int first=input-abs(i),mid=(first*2)-1,len=mid-first,x;
        for(x=0-len;x<=len;x++)
        {
        int z=mid-abs(x);
        printf("%d ",z%10);//limiting the output in 10 :)
        }
    }
}

