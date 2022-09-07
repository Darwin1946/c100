// 题目：求1+2!+3!+...+20!的和。

#include <stdio.h>
int main()
{
    long double a = 1; // int放不下这么大的阶乘，浮点数可表示的范围要大很多
    long double res = 0;
    for (int i = 1; i <= 20; i++)
    {
        a = a * i;
        res += a;
    }
    printf("%Lf", res);
}