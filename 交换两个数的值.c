#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
    int a, b;
    int c = 0;
    scanf("%d%d", &a, &b);
    c = a;
    a = b;
    b = c;
    printf("a=%d,b=%d", a, b);


    return 0;
}