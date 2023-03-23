#include <stdio.h>
#include <stdlib.h>

int suma_wartosci(int (*wsk1)(int), int (*wsk2)(int), int n);

int p1(int a)
{
    return a;
}
int p2(int a)
{
    return 2*a;
}

int main()
{
    int wynik = suma_wartosci(p1,p2,4);
    printf("%d",wynik);
    return 0;
}

int suma_wartosci(int (*wsk1)(int), int (*wsk2)(int), int n)
{
    return wsk1(n) + wsk2(n);
}
