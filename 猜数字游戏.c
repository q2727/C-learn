#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
void menu()
{
    printf("######################\n");
    printf("########猜数字########\n");
    printf("######################\n");
}
void game()
{
    int i;
    int ret;
    ret = rand();
    ret = ret % 100 + 1;
    while (1)
    {
        scanf("%d", &i);
        if (i == ret)
        {
            printf("猜对了\n");
            break;
        }
        else if (i < ret)
            printf("猜小了\n");
        else if (i > ret)
            printf("猜大了\n");
    }
}
    int main()
{
    int n = 0;
    do
    {
        srand((unsigned int) time (NULL));
        menu();
        printf("请输入：1-->玩游戏;2-->退出游戏\n");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            game();
            break;
        case 2:
            printf("已退出游戏\n");
            break;
        default:
            printf("输入错误，请重新输入\n");
        }
        if (n == 2)
            break;
    } 
    while (1);
         return 0;
}