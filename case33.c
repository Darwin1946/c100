// 题目：判断一个数字是否为质数。
#include <stdio.h>
#include <math.h>
int isPrime(int);
int main()
{
    int num;
    printf("input your number:\n");
    scanf("%d", &num);
    int res = isPrime(num);
    if (!res)
    {
        printf("it is a prime\n");
    }
    else
    {
        printf("it is not a prime\n");
    }
}
int isPrime(int n)
{

    if (n <= 1)
        return 0;
    if (n == 2)
        return 1;
    if (n % 2 == 0)
        return 0;
    int limit = (int)sqrt((double)n);
    for (int i = 3; i <= limit; i = i + 2)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}