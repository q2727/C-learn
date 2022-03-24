#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
    int n, y, r;
    int all;
    int yue = 0;
    int i;
    int day;
    scanf("%d%d%d", &n, &y, &r);
    int arr[] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    for (i = 0; i < y - 1; i++)
    {
        yue += arr[i];
    }
    yue += r;
    if ((y >2||(y==2&&r==29)) && (n % 400 == 0 || (n % 4 == 0 && n % 100 != 0)))
        yue++;
    all = 365 * (n - 1900) + yue;
    for (i = 1900; i < n; i++)
    {
        if (i % 400 == 0 || (i % 4 == 0 && i % 100 != 0))
            all++;
    }
    day = all % 7;
    printf("%d\n", day);
         return 0;
}