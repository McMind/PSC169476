#include <stdio.h>
#include <stdlib.h>

int* mniejsza(int* x,int* y);

int main()
{
    int a = 2;
    int b = 8;
    int* wynik = mniejsza(&a,&b);
    printf("%p\n",wynik);
    return 0;
}

int* mniejsza(int* a,int* b)
{
    if(*a<*b)
    {
        return a;
    }
    return b;
}
