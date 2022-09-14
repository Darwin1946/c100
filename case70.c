// 题目：写一个函数，求一个字符串的长度，在 main 函数中输入字符串，并输出其长度。
#include<stdio.h>
int countLen(char *p);
int main()
{
    char p[100];
    printf("input your strings:\n");
    scanf("%s",p);
    printf("lens:%d",countLen(p));
    return 0;
}

int countLen(char *p)
{
    int i = 0;
    while(*(p+i)!='\0')
    {
        i++;
    }
    return i;
}

