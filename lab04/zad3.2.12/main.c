#include <stdio.h>
#include <stdlib.h>

double* rezerwacja_ilosc(int n);

int main()
{
    double* wynik = rezerwacja_ilosc(4);
    return 0;
}

double* rezerwacja_ilosc(int n)
{
    return malloc(n*sizeof(double));
}
