// 题目：一个数如果恰好等于它的因子之和，这个数就称为"完数"。例如6=1＋2＋3.编程找出1000以内的所有完数。
#include <stdio.h>

int main()
{
    for (int i = 1; i <= 1000; i++)
    {
        int temp = 0;

        for (int j = 1; j < i; j++)
        {
            if (i % j == 0)
            {
                temp += j;
            }
        }
        if (temp == i)
        {
            printf("%d\n", i);
        }
    }
}