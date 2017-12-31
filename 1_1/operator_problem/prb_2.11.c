/*read temperature in celsius & display fahrenheit.*/

#include <stdio.h>

int main(){

    int celsius;double fahrenheit;
    scanf("%d",&celsius);
    fahrenheit=((1.8*celsius)+32);
    printf("The fahrenheit value is %lf\n",fahrenheit);
    return 0;
}