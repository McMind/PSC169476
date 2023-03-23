#include <stdio.h>
#include <stdlib.h>

double funkcja(double(*funkcja2)(int a), int b);

double funkcja2(int a)
{
    return(a+2);
}

int main()
{
    double wynik = funkcja(funkcja2,5);
    printf("%lf",wynik);
    return 0;
}

double funkcja(double(*wsk)(int), int a)
{
    return wsk(a);
}
