/*Read two numbers & display bitwise AND*/

#include <stdio.h>

int main(){

    int a,b,bit;
    scanf("%d %d",&a,&b);
    bit=(a&b);
    printf("Bitwise AND %d\n",bit);
    return 0;
}