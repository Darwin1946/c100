// 题目：利用条件运算符的嵌套来完成此题：学习成绩>=90分的同学用A表示，60-89分之间的用B表示，60分以下的用C表示。

#include<stdio.h>
int main()
{
    int score;
    printf("get score:\n");
    scanf("%d",&score);
    if (score>=90)
    {
        printf("A\n");
        
    }
    else{
        if (score>60)
        {
            printf("B\n");
        }
        else
        {
            printf("C\n");
        }
        
    }
    
}