#include <stdio.h>
#include <stdlib.h>

int mniejsza(int* x,int* y);

int main()
{
    int a = 5;
    int b = 3;
    int wynik = mniejsza(&a,&b);
    printf("%d\n",wynik);
    return 0;
}

int mniejsza(int* a,int* b)
{
    if(*a<*b)
    {
        return *a;
    }
    return *b;
}
