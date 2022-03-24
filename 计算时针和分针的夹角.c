#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
    float s, f,a,b,n;
    scanf("%f%f", &a, &b);
    f = b * 6.0;
    s = a * 30.0 + b * 0.5;
    n = s - f;
    if (n > 180)
        n = 360 - n;
    if(b<10)
        printf("At %.0f:0%.0f the angle is %.1f degrees.\n", a, b, n >= 0 ? n : (-n));
    else
    printf("At %.0f:%.0f the angle is %.1f degrees.\n",a,b, n >= 0 ? n : (-n));
         return 0;
}