// 题目：判断 101 到 200 之间的素数。

#include <stdio.h>
 
int main()
{
    int i,j;
    int count=0;
    
    for (i=101; i<=200; i++) 
    {
        for (j=2; j<i; j++) 
        {
        // 如果 j 能被 i 整除再跳出循环
            if (i%j==0) 
                break;
        }
    // 判断循环是否提前跳出，如果 j<i 说明在 2~j 之间,i 有可整除的数
        if (j>=i) 
        {
            count++;
            printf("%d ",i);
        // 换行，用 count 计数，每五个数换行
            if (count % 5 == 0) 
            printf("\n");
        }
    }    
    return 0;
}