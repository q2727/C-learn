#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
    int a, b, c,d,e;
    scanf("%d%d", &a, &b);
    d = a;
    e = b;
    c = a % b;

    while (c != 0)
    {
        a = b;
        b = c;
        c = a % b;
     }
     printf("%d和%d的最大公约数是%d", d, e, b);

     return 0;
}