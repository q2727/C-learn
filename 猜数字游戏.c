#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<stdlib.h>
void menu()
{
    printf("######################\n");
    printf("########������########\n");
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
            printf("�¶���\n");
            break;
        }
        else if (i < ret)
            printf("��С��\n");
        else if (i > ret)
            printf("�´���\n");
    }
}
    int main()
{
    int n = 0;
    do
    {
        srand((unsigned int) time (NULL));
        menu();
        printf("�����룺1-->����Ϸ;2-->�˳���Ϸ\n");
        scanf("%d", &n);
        switch (n)
        {
        case 1:
            game();
            break;
        case 2:
            printf("���˳���Ϸ\n");
            break;
        default:
            printf("�����������������\n");
        }
        if (n == 2)
            break;
    } 
    while (1);
         return 0;
}