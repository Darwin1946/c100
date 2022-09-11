// 题目：#if #ifdef和#ifndef的综合应用。

// #if 的用法：它的意思是：如常“表达式1”的值为真（非0），就对“程序段1”进行编译，否则就计算“表达式2”，结果为真的话就对“程序段2”进行编译，
// 为假的话就继续往下匹配，直到遇到值为真的表达式，或者遇到 #else。这一点和 if else 非常类似。
// 需要注意的是，#if 命令要求判断条件为“整型常量表达式”，也就是说，表达式中不能包含变量，而且结果必须是整数；而 if 后面的表达式没有限制，
// 只要符合语法就行。这是 #if 和 if 的一个重要区别。

// #ifdef 的用法: 它的意思是，如果当前的宏已被定义过，则对“程序段1”进行编译，否则对“程序段2”进行编译。也可以省略 #else：
// 与 #ifdef 相比，仅仅是将 #ifdef 改为了 #ifndef。它的意思是，如果当前的宏未被定义，则对“程序段1”进行编译，否则对“程序段2”进行编译，这与 #ifdef 的功能正好相反。


#include<stdio.h>
#define MAX
#define MAXIMUM(x,y)(x>y)?x:y
#define MINIMUM(x,y) (x>y)?y:x
int main()
{
    int a=10,b=20;
#ifdef MAX
    printf("bigger %d\n",MAXIMUM(a,b));//1
    printf("test\n");//看样子程序段也不需要打{}，用#endif做休止符
#else
    printf("smaller %d\n",MINIMUM(a,b));
#endif
#ifndef MIN
    printf("smaller %d\n",MINIMUM(a,b));//1
#else
    printf("bigger %d\n",MAXIMUM(a,b));
#endif
#undef MAX
#ifdef MAX
    printf("bigger %d\n",MAXIMUM(a,b));
#else
    printf("smaller %d\n",MINIMUM(a,b));//1
#endif
#define MIN
#ifndef MIN
    printf("smaller %d\n",MINIMUM(a,b));
#else
    printf("bigger %d\n",MAXIMUM(a,b));//1
#endif
    return 0;
}