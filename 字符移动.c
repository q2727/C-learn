#define _CRT_SECURE_NO_WARNINGS 1

#include<stdlib.h>
#include<stdio.h>
#include<windows.h>
#include<string.h>
int main()
{
    char a[] = "welcome to beijing!";
    char b[] = "###################";
    int n;
    int i;
    n = strlen(a) - 1;
    for (i = 0; i <= n; i++)
    {
        Sleep(1*1000);
        system("cls");
        b[i] = a[i];
        b[n] = a[n];
        n--;
        printf("%s\n", b);
    }
    
         return 0;
}