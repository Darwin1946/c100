// 题目：将一个数组逆序输出。
#include<stdio.h>
#define N 10
int main()
{
    int a[N]={0,1,2,3,4,5,9,7,8,9};
    int i,t;
    printf("original array:\n");
    for(i=0;i<N;i++)
        printf("%d ",a[i]);
    for(i=0;i<N/2;i++)
    {
        t=a[i];
        a[i]=a[N-1-i];
        a[N-1-i]=t;
    }
    printf("\nres:\n");
    for(i=0;i<N;i++)
        printf("%d ",a[i]);
    printf("\n");
    return 0;
}