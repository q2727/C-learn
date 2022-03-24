#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
    int i;
    int j;
    scanf("%d", &i);
    for (j = 1; j <= i; j++)
    {
        printf("*");
    }
    printf("\n");
         return 0;
}