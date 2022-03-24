#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
    int i;
    int j;
    int n;
    int a;
    scanf("%d", &i);
    a = 1;
    for (j = 1; j <= i; j++)
    {
        for (n = a; n < a+i-1; n++)
        {
            if (n <= 9)
                printf("  %d", n);
            else
                printf(" %d", n);
        }
        if (n <= 9)
            printf("  %d\n", n);
        else
            printf(" %d\n", n);
        a += i;
    }   
         return 0;
}