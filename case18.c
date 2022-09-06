// 题目：求s=a+aa+aaa+aaaa+aa...a的值，其中a是一个数字。例如2+22+222+2222+22222(此时共有5个数相加)，几个数相加有键盘控制。

#include<stdio.h>
int main()
{
    int num;
    int times;
    printf("your number:\n");
    scanf("%d",&num);
    printf("your times:\n");
    scanf("%d",&times);
    int temp1 = 1;
    int temp2 = 0;
    int temp3 = 1;
    for (int i = 0; i < times; i++)
    {
        temp2+=temp1;
        temp3=temp3*10;
        temp1+=temp3;
    }

    printf("res:%d",num*temp2);
    
}