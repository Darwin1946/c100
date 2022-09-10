// 题目：练习函数调用。
#include <stdio.h>
void hello_world(void)
{
    printf("Hello, world!\n");
}
void three_hellos(void)
{
    int counter;
    for (counter = 1; counter <= 3; counter++)
        hello_world();
}
int main(void)
{
    three_hellos();
}