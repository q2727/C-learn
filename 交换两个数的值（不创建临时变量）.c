#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{

    int a, b;
    scanf("%d%d", &a, &b);
    a = a + b;//a=a^b;   a=a<<8;   
    b = a - b;//b=a^b;   a=a+b;
    a = a - b;//a=a^b;   b=b>>8;    a=a&0xff;
    printf("a=%d,b=%d", a, b);
         return 0;
}