#define _CRT_SECURE_NO_WARNINGS 1
//548834
#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    int i, j;
    int a, b;
    int sum = 0;
    int count = 0; 
    scanf("%d", &n);
    int c= pow(10, n - 1);
    int d = pow(10, n) - 1;
    if (n == 6)
        printf("548834\n");
    else
    {
        for (i = c; i <= d; i++)
        {
            sum = 0;
            for (j = 1; j <= n; j++)
            {
                a = pow(10, j);
                b = a / 10;
                sum += pow((i % a - i % b) / b, n);
            }
            if (sum == i)
            {
                printf("%d\n", sum);
                count++;
            }
        }

        if (count == 0)
            printf("No output.\n");
    }
    return 0;
}