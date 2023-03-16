#include <stdio.h>
#include <stdlib.h>

double* rezerwacja();

int main()
{
    double* wynik = rezerwacja();
    return 0;
}

double* rezerwacja()
{
    return malloc(sizeof(double));
}
