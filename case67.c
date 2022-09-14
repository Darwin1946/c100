// 题目：输入数组，最大的与第一个元素交换，最小的与最后一个元素交换，输出数组。
#include<stdio.h>
void changeMax(int[],int);
void changeMin(int[],int);
void switchPosition(int *,int,int);

int main()
{
    int nums[10]={2,45,7,2,65,12,67,19,3,8};
    int len = sizeof(nums)/sizeof(nums[0]);
    changeMax(nums,len);
    changeMin(nums,len);
    for (int i = 0; i < 10; i++)
    {
        printf("%d ",nums[i]);
    }
    
    return 0;
}

void changeMax(int nums[],int len){
    // int len = sizeof(nums)/sizeof(nums[0]); num传值，编译器自动把num识别成指针变量了，sizeof的大小不是数组的大小，是指针的大小，恒为8
    int max = nums[0];
    int max_index = 0;
    for(int i=1;i<len;i++)
    {
        if (nums[i]>max)
        {
            max = nums[i];
            max_index = i;
        }
        else{
            continue;
        }
        
    }
    switchPosition(nums,0,max_index);
    
}

void changeMin(int *nums,int len){

    int min = nums[0];
    int min_index = 0;
    for(int i=1;i<len;i++)
    {
        if (nums[i]<min)
        {
            min = nums[i];
            min_index = i;
        }
        else{
            continue;
        }
        
    }
    switchPosition(nums,len-1,min_index);
    
}

void switchPosition(int *nums,int a, int b)
{
    int temp=nums[a];
    nums[a] = nums[b];
    nums[b] = temp;
}