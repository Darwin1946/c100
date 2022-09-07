// 题目：利用递归方法求5!。

#include<stdio.h>
int fun(int);
int main()
{
    int num;
    int res;
    printf("get init value:\n");
    scanf("%d",&num);
    res = fun(num);
    printf("res:%d",res);

}

int fun(int value)
{
    if (value!=1)
    {
         value = value*fun(value-1);
    }
    return value;
   
}