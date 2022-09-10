// 题目：求一个3*3矩阵对角线元素之和
#include<stdio.h>
#define N 3
int main()
{
    int i,j,a[N][N],sum=0;
    printf("input matrix(3*3):\n");
    for(i=0;i<N;i++)
        for(j=0;j<N;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<N;i++)
        sum+=a[i][i];
    printf("res:%d\n",sum);
    return 0;
}