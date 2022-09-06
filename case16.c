// 题目：输入两个正整数m和n，求其最大公约数和最小公倍数。

// 程序分析：

// （1）最小公倍数=输入的两个数之积除于它们的最大公约数，关键是求出最大公约数；

// （2）求最大公约数用辗转相除法（又名欧几里德算法）

#include<stdio.h>

int main()
{
     int a,b,t,r,n;
    printf("input two num:\n");
    scanf("%d %d",&a,&b);
    if(a<b)
    {t=b;b=a;a=t;}
    r=a%b;
    n=a*b;
    while(r!=0)
    {
        a=b;
        b=r;
        r=a%b;
    }
    printf("res gys:%d, gbs:%d\n",b,n/b);
    
    return 0;
}