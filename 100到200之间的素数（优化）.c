#define _CRT_SECURE_NO_WARNINGS 1
#include<math.h>
#include<stdio.h>
int main()
{
    int i = 100;
    int j = 0;
    int count = 0;
    for (i =101; i <= 200; i+=2)
    {
        for (j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
                break;
        }
        if (j > sqrt(i))
        {
            printf("%d\n", i);
            count++;
        }
    }
    printf("%d", count);
         return 0;
}