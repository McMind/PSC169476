#include <stdio.h>
#include <stdlib.h>

int* rezerwacja_ilosc(int n);

int main()
{
    int* wynik = rezerwacja_ilosc(4);
    return 0;
}

int* rezerwacja_ilosc(int n)
{
    return malloc(n*sizeof(int));
}
