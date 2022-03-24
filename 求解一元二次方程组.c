#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>
int main()
{
    int a, b, c;
    double x1, x2,n,m;
    scanf("%d%d%d", &a, &b, &c);
    if (a == 0 && b == 0)
        printf("Input error!\n");
    if (a == 0 && b != 0)
    {
        x1 = (- c )/(1.0 *b);
        printf("x=%.6lf\n", x1);
    }
    if (a != 0 && b * b - 4 * a * c == 0)
    {
        x1 = x2 = -b / (2*a);
        printf("x1=x2=%.6f\n", x1, x2);
    }
    if (a != 0 && b * b - 4 * a * c > 0)
    {
        n = sqrt(b * b - 4 * a * c);
        x1 = ((-b + n) / (2 * a)) > ((-b - n) / (2 * a)) ? ((-b + n) / (2 * a)) : ((-b - n) / (2 * a));
        x2 = ((-b + n) /(2 * a))< ((-b - n) / (2 * a) )? ((-b + n) /(2 * a)) : ((-b - n) / (2 * a));
        printf("x1=%.6lf\nx2=%.6lf\n", x1, x2);
    }
    if ( b * b - 4 * a * c <0)
    {
        m = -1.0*b / (2.0*a);
       n= sqrt(4 * a * c - b * b);
       x1 = -n / (2 * a) > n / (2 * a) ? -n / (2 * a) : n / (2 * a);
       x2 = -n / (2 * a) < n / (2 * a) ?- n / (2 * a) : n / (2 * a);
       if (b == 0)
           printf("x1=%.6lfi\nx2=%.6lfi\n", x1, x2);
       else
           printf("x1=%.6lf+%.6lfi\nx2=%.6lf%.6lfi\n", m, x1, m, x2);
    }

         return 0;
}