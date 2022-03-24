#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
    int arr[] = { 0,1,2,3,4,5,6,7,8,9,10 };
    int l = 0;
    int r = sizeof(arr) / sizeof(arr[0]) - 1;
    int n;
    printf("请输入一个数\n");
        scanf("%d", &n);
    while (l <= r)
    {
        if (arr[(l + r) / 2] == n)
        {
            printf("找到了，下标为%d", (l + r) / 2);
            break;
        }
        else if (arr[(l + r) / 2] < n)
            l = (l + r) / 2 + 1;
        else if (arr[(l + r)/ 2]>n)
            r=(l+r)/2-1;
    }
    if (l > r)
        printf("不存在\n");

         return 0;
}