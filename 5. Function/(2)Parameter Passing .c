#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdbool.h>

/*
void cheer(int i)
{
    printf("cheer %d\n", i);
}

int main()
{
    cheer(2);
    cheer(2.0);
    cheer(2.4);  // 存在隐含的从double到int的转换，这个转换将2.4变成2
    double f = 2.4;
    cheer(f);

// · 调用函数时给的值与参数的类型不匹配是C语言传统上最大的漏洞
// · 编译器总是悄悄替你把类型转换好，但是这很可能不是你所期望的
// · 后续的语言中，C++/Java在这方面很严格

    return 0;
}
*/

void swap(int, int);
int main()
{
    int a = 5;
    int b = 6;
    swap(a, b);
    printf("a=%d b=%d\n", a, b);  // 仍为5 6
    
    return 0;
}
void swap(int x, int y)
{
    int t = x;
    x = y;
    y = t;
}
/*
C语言在调用函数时，只能传值给函数

· 每个函数有自己的变量空间，参数也位于这个独立的空间中，和其他函数没有关系
· 过去，对于函数参数表中的参数，叫做形式参数formal parameter；调用函数时给的值，叫做实际参数real/actual parameter
· 我们认为，他们是参数和值的关系
*/