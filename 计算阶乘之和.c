#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
    int i = 1;
    int j = 1;
    int a = 1;
    int b = 0;
    for (i = 1; i <= 4; i++)
    {
        for (a=1,j = 1; j <= i; j++)
        {
            a = a * j;
        }
        b += a;
    }
    printf("%d", b);

         return 0;
}