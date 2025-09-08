/*
什么是函数：
· 函数是一块代码，接受零个或多个参数，做一件事情，并返回零个或一个值

调用函数：
· 函数名(参数值)
· ()起到了表示函数调用的重要作用
    · 即使没有参数也需要()
· 如果有参数，则需要给出正确的数量和顺序
· 这些值会被按照顺序依次用来初始化函数中的参数
*/

/*
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdbool.h>

void cheer();  // 函数的原型声明——名称、参数(数量及类型)、返回类型

int main()
{
    cheer();
    return 0;
}
void cheer()
{
    printf("cheer\n");
}
*/

/*
从函数中返回值：
· return停止函数的执行，并送回一个值
    · return;
    · return 表达式;
· 一个函数可以有多个return语句
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdbool.h>

void sum(int, int); // 声明 or void sum(int begin, int end);

int main()
{
    sum(1, 10);
    sum(20, 30);
    sum(35, 45);

    return 0;
}
void sum(int begin, int end)  // 定义
{
    int i;
    int sum = 0;
    for(i=begin; i<=end;i++)
    {
        sum += i;
    }
    printf("%d到%d的和是%d\n", begin, end, sum);
}

