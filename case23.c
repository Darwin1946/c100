// 题目：打印出如下图案（菱形）。
//    *
//   ***
//  *****
// *******
//  *****
//   ***
//    *

#include <stdio.h>
int main()
{
    int num;
    printf("set parameter:\n");
    scanf("%d", &num);
    int mid = num;
    for (int i = 0; i < num / 2 + 1; i++)
    {
        for (int j = 0; j < num / 2 - i; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < 2 * i + 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (int i = 0; i < num / 2; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < num - 2 * (i + 1); k++)
        {
            printf("*");
        }
        printf("\n");
    }
}