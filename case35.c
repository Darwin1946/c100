// 题目：字符串反转，如将字符串 "www.runoob.com" 反转为 "moc.boonur.www"。
#include<stdio.h>
#include<string.h>
void reverse(char* s);
int main()
{
    char s[100];
    printf("input your strings:\n");
    scanf("%s",s);
    reverse(s);
    printf("%s",s);
}

void reverse(char* s)
{
    int len = strlen(s);    
    int i = 0;
    char c;
    while (i <= len / 2 - 1)
    {
        c = *(s + i);//一个字符占一个字节，内存地址加一的方式可以遍历字符串
        *(s + i) = *(s + len - 1 - i);//去掉\0
        *(s + len - 1 - i) = c;
        i++;
    }
}