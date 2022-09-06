// 题目：一球从100米高度自由落下，每次落地后反跳回原高度的一半；再落下，求它在第10次落地时，共经过多少米？第10次反弹多高？

#include<stdio.h>
int main()
{
    double start = 100;
    int times = 10;
    double total = 0;
    total+=start;
    for (int i = 1; i < times; i++)
    {
        total+=start*0.5*2;
        start*=0.5;
    }
    printf("total:%lf,start:%lf\n",total,start);
    
}