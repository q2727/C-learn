#define _CRT_SECURE_NO_WARNINGS 1
//�ܱ�4����ȴ���ܱ�100�������ܱ�400��������ݾ������꣡
#include<stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    if (a % 400 == 0)
    {
        printf("%d��������", a);
    }
    else if (a % 4 == 0 & a % 100 != 0)
    {
        printf("%d��������", a);
    }
    else
    {
        printf("%d�겻������", a);
    }
   return 0;
}