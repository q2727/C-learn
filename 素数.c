#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
    int a = 100;
    int b = 2;
    int c = 0;
    int d = 0;
    while (a < 200)
    {
        while (b <=a / 2)
        {
            c = a / b;
            if (a == c * b)
            {
                d = 1;
            }
            
            b++;
        }
        if (d == 0)
        {
            printf("%d\n", a);
        }
        b = 2;
        d = 0;
        a++;
    }

         return 0;
}