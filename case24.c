// 题目：有一分数序列：2/1，3/2，5/3，8/5，13/8，21/13...求出这个数列的前20项之和。

#include<stdio.h>
int main()
{
    double fir = 1;
    double sed = 2;
    double total = 0;
    double temp;
    for (int i = 0; i < 20; i++)
    {
        total += sed/fir;
        temp = sed;
        sed = fir+sed;
        fir = temp;
        printf("%.0lf/%.0lf",sed,fir);
        if (i!=19)
        {
            printf("+");
        }    
    }
    printf("=%lf",total);
}