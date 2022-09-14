// 题目：输入3个数a,b,c，按大小顺序输出。
#include <stdio.h>
int main()
{
    int a;
    int b;
    int c;
    printf("input your numbers:\n");
    scanf("%d%d%d", &a, &b, &c);

    if (a > b)
    {
        if (a > c)
        {
            printf("%d\n", a);
            printf("%d\n", c);
        }
        else
        {
            printf("%d\n", c);
            printf("%d\n", a);
        }
        printf("%d\n", b);
    }
    else
    {
        if (b > c)
        {
            printf("%d\n", b);
            printf("%d\n", c);
        }
        else
        {
            printf("%d\n", c);
            printf("%d\n", b);
        }
        printf("%d\n", a);
    }

    return 0;
}