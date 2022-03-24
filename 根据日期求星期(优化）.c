#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int n = 0;
    int y = 0;  
    int r=0;
    int all=0;
    int yue = 0;
    int i=0;
    int day=0;
    scanf("%d%d%d", &n, &y, &r);
    int arr[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    if (y > 12 || y <= 0)
        printf("month is error.\n");
    else if (r > 31||r<=0)
        printf("day is error.\n");
    else if (r == 31 && (y == 2 || y == 4 || y == 6 || y == 9 || y == 11))
        printf("day is error.\n");
    else if (r == 30 && y == 2)
        printf("day is error.\n");
    else if (r == 29 && !(n % 400 == 0 || (n % 4 == 0 && n % 100 != 0)))
        printf("day is error.\n");
    else
    {
        for (i = 0; i < y - 1; i++)
        {
            yue += arr[i];
        }
        yue += r;
        if ((y > 2 || (y == 2 && r == 29)) && (n % 400 == 0 || (n % 4 == 0 && n % 100 != 0)))
            yue++;
        all = 365 * (n - 1900) + yue;
        for (i = 1900; i < n; i++)
        {
            if (i % 400 == 0 || (i % 4 == 0 && i % 100 != 0))
                all++;
        }
        day = all % 7;
        printf("%d\n", day);
    }
         return 0;
}