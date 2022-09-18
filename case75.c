// 题目：输入一个整数，并将其反转后输出。

#include <stdio.h>
int main()
{
    int n, reversedNumber = 0, remainder;
 
    printf("input a integer: ");
    scanf("%d", &n);
 
    while(n != 0)
    {
        remainder = n%10;
        reversedNumber = reversedNumber*10 + remainder;
        n /= 10;
    }
 
    printf("resversed Number: %d", reversedNumber);
 
    return 0;
}