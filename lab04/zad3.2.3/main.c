#include <stdio.h>
#include <stdlib.h>

void zamien(int* a,int* b);

int main()
{
    int a = 5;
    int b = 3;
    zamien(&a,&b);
    return 0;
}

void zamien(int* a,int* b)
{
    int tmp = *b;
    *b = *a;
    *a = tmp;
}
