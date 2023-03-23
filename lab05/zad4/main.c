#include <stdio.h>
#include <stdlib.h>

int foo(const int *wsk1, int *const wsk2)
{
    return *wsk1 - *wsk2;
}

int main()
{
    int a = 3;
    int b = 2;
    int wynik = foo(&a,&b);
    printf("%d",wynik);
    return 0;
}
