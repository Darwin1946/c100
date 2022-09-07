// 题目：给一个不多于5位的正整数，要求：一、求它是几位数，二、逆序打印出各位数字。
#include<stdio.h>
int main()
{
    int num;
    printf("get your number:\n");
    scanf("%d",&num);
    if (0<num<99999)
    {
        int a = num/10000;
        int b = num%10000/1000;
        int c = num%1000/100;
        int d = num%100/10;
        int e = num%10;
        if (a!=0){
        printf("res 5: %ld %ld %ld %ld %ld\n",e,d,c,b,a);
    } else if(b!=0) {
         printf("res 4: %ld %ld %ld %ld\n",e,d,c,b);
    } else if(c!=0) {
         printf("res 3:%ld %ld %ld\n",e,d,c);
    } else if(d!=0) {
         printf("res 2: %ld %ld\n",e,d);
    } else if(e!=0) {
         printf("res 1:%ld\n",e);
    }
    }
    else{
        printf("error input");
    }
    
}