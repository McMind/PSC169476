#include <stdio.h>
#include <stdlib.h>

int suma(const int* a, const int* b);

int main()
{
    int a = 5;
    int b = 4;
    int wynik = suma(&a,&b);
    return 0;
}

int suma(const int* a, const int* b)
{
    return *a+*b;
}
