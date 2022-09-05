// 题目：输入某年某月某日，判断这一天是这一年的第几天？

// 程序分析：以3月5日为例，应该先把前两个月的加起来，然后再加上5天即本年的第几天，特殊情况，闰年且输入月份大于3时需考虑多加一天。

#include<stdio.h>
int main()
{
    int year;
    int mouth;
    int day;
    int result;
    int Feb = 29;
    printf("input y m d:\n");

    scanf("%d %d %d",&year,&mouth,&day);
    printf("get:%d/%d/%d\n",year,mouth,day);

    if (year%4)
    {
        Feb = 28;
    }

    if (mouth>12&&mouth<1&&day>31&&day<1)
    {
        printf("ipunt error\n");
    }
    else{
    printf("start calc:\n");
    switch (mouth)
    {
    case 1:
        result = day;
        break;
    case 2:
        result = 31+day;
        break;
    case 3:
        result = 31+Feb+day;
        break;
    case 4:
        result = 31+Feb+31+day;
        break;
    case 5:
        result = 31+Feb+31+30+day;
        break;
    case 6:
        result = 31+Feb+31+30+31+day;
        break;
    case 7:
        result = 31+Feb+31+30+31+30+day;
        break;
    case 8:
        result = 31+Feb+31+30+31+30+31+day;
        break;
    case 9:
        result = 31+Feb+31+30+31+30+31+31+day;
        break;
    case 10:
        result = 31+Feb+31+30+31+30+31+31+30+day;
        break;
    case 11:
        result = 31+Feb+31+30+31+30+31+31+30+31+day;
    case 12:
        result = 31+Feb+31+30+31+30+31+31+30+31+30+day;
    default:
        break;
    }
    printf("result:%d\n",result);
    }

}