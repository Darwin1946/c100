// 题目：一个5位数，判断它是不是回文数。即12321是回文数，个位与万位相同，十位与千位相同。
#include <stdio.h>
int main()
{
    int num;
    printf("input your number:\n");
    scanf("%d", &num);
    int a = num / 10000;
    int b = num % 10000 / 1000;
    int c = num % 1000 / 100;
    int d = num % 100 / 10;
    int e = num % 10;

    if (a == e && b == d)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
}