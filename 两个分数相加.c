#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
int a, b, c, d, e, f,  x, y,n;
    double i, j;
  
    char ch;
    scanf("%d/%d %c %d/%d", &a, &b,&ch,&c, &d);
    i =b/a;
    j = d/c;
    if (ch == '+')
    {
        x = a * d + b * c;
        y = b * d;
    }
    else if (ch == '-')
    {
        x = a * d - b * c;
        y = b * d;
    }
    else if (ch == '*')
    {
        x = a * c;
        y = b * d;
    }
    else if (ch == '/')
    {
        x = a * d;
        y = b * c;
    }
    e = x;
    f = y;
    if(x==0)
        printf("%d/%d %c %d/%d = 0\n", a, b, ch, c, d);
    else
    {
        n = f % e;
        if (e > f)
        {
            e = e + f;
            f = e - f;
            e = e - f;
        }
        while (n != 0)
        {
            f = e;
            e = n;
            n = f % e;
        }
        if (ch == '-' && i > j)
            e = -e;
        if (y / e == 1)
            printf("%d/%d %c %d/%d = %d\n", a, b, ch, c, d, x / e);
        else
            printf("%d/%d %c %d/%d = %d/%d\n", a, b, ch, c, d, x / e, y / e);
    }
    return 0;
}