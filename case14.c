// 题目：将一个正整数分解质因数。例如：输入90,打印出90=2*3*3*5。

#include <stdio.h>
int main()
{
    int num;
    printf("input num:\n");
    scanf("%d", &num);
    printf("\n%d=", num);
    while (num != 1)
    {
        for (int i = 2; i <= num; i++)
        {

            if (num % i == 0)
            {
                num = num / i;
                if (num != 1)
                {
                    printf("%d*", i);
                    break;
                }
                else
                    printf("%d", i);
                break;
            }
            else
                continue;
        }
    }
}