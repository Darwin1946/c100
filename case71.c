// 题目：编写input()和output()函数输入，输出5个学生的数据记录。
#include<stdio.h>

typedef struct{
char name[10];
char sex[5];
int age;
}Stu;

void input(Stu[]);
void output(Stu[]);

int main()
{
    Stu stu[5];
    input(stu);
    output(stu);

}

void input(Stu stu[])
{
    printf("input students info:\n");
    for(int i=0;i<5;i++)
    {
        scanf("%s%s%d",&stu[i].name,&stu[i].sex,&stu[i].age);
    }
}

void output(Stu stu[])
{
    printf("get students info:\n");
    for(int i=0;i<5;i++)
    {
        printf("name:%s sex:%s age:%d\n",stu[i].name,stu[i].sex,stu[i].age);
    }
}