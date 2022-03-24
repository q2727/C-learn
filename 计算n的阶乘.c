#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
    int n = 0;
    scanf("%d", &n);
    int i = 1;
    int r = 1;
    for (i = 1; i <= n; i++)
    {
        r = r * i;
    }
    printf("%d", r);

         return 0;
}