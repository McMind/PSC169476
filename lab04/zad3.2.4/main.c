#include <stdio.h>
#include <stdlib.h>

void zamien_jesli(int* a, int* b);

int main()
{
    int a = 18;
    int b = 11;
    zamien_jesli(&a,&b);
    return 0;
}

void zamien_jesli(int* a, int* b)
{
    if(*a>*b)
    {
        int tmp = *a;
        *a = *b;
        *b = tmp;
    }
}
