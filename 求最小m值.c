#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
    int m, n;
    int sum = 0;
    scanf("%d", &n);
    for (m = 1;; m++)
    {
        sum += m;
        if (sum >= n)
            break;
    }
    printf("%d\n", m);
         return 0;
}