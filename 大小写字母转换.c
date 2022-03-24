#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
    char a;
    scanf("%c", &a);
    if (a >= 65 && a <= 90)
        printf("%c\n", a + 32);
    else if (a >= 97 && a <= 122)
        printf("%c\n", a - 32);
    else
        printf("%c\n", a);

         return 0;
}