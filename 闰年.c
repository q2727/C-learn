#define _CRT_SECURE_NO_WARNINGS 1
//能被4整除却不能被100整除或能被400整除的年份就是闰年！
#include<stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    if (a % 400 == 0)
    {
        printf("%d年是闰年", a);
    }
    else if (a % 4 == 0 & a % 100 != 0)
    {
        printf("%d年是闰年", a);
    }
    else
    {
        printf("%d年不是闰年", a);
    }
   return 0;
}