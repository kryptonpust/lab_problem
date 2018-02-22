/*
read angle and display sin inverse*/

#include <stdio.h>
#include <math.h>

int main() {
    float a;
    scanf("%f", &a);
    printf("%lf", asin(a) * (180 / M_PI));
}