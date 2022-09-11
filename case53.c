// 题目：学习使用按位异或 ^。

#include <stdio.h>
int main()
{
    int a,b;
    a=077;
    b=a^3;
    printf("b 的值为 %d \n",b);
    b^=7;
    printf("b 的值为 %d \n",b);
    return 0;
}