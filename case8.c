// 题目：输出9*9口诀。

// 程序分析：分行与列考虑，共 9 行 9 列，i 控制行，j 控制列。

// 程序源代码：


#include<stdio.h>

int main()
{
    for (int i = 1; i < 10; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d*%d=%-3d",i,j,i*j);//-3是指左对齐，占三个字符
        }
        printf("\n");
    }
    
}