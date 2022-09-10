// 题目：求100之内的素数。

#include<stdio.h>
#include<math.h>
int isPrime(int);
int main()
{
    int res;
    for (int i = 1; i <= 100; i++)
    {
       res = isPrime(i);
    if (!res)
    {
        printf("%d\n",i);
    }
    else
    {
        // printf("%d is not a prime\n",i);
    }
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