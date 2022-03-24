#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int main()
{
    int arr[3] = { 0 };
    int i;
    int j;
    for (i = 0; i < 3; i++)
        scanf("%d", &arr[i]);
        for (j = 0; j < 2; j++)
        {
            for (i = j+1; i < 3; i++)
            {
                if (arr[j] < arr[i ])
                {
                    arr[j] = arr[j] + arr[i ];
                    arr[i] = arr[j] - arr[i ];
                    arr[j] = arr[j] - arr[i ];
                }
            }
        }
    for (i = 0; i < 3; i++)
        printf("%d ", arr[i]);
         return 0;
}