#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double srd_geometryczna(int n, unsigned int * tab);

int main()
{
    unsigned int tab[] = {2,2,5,7};
    printf("%lf\n",srd_geometryczna(4,tab));
    return 0;
}

double srd_geometryczna(int n, unsigned int * tab)
{
    double wynik = 1;
    for(int i = 0; i < n; i++)
    {
        wynik *= *(tab + i);
    }
    wynik = pow(wynik,1.0/n);
    return wynik;
}
