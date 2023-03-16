#include <stdio.h>
#include <stdlib.h>

int* rezerwacja();

int main()
{
    int* wynik = rezerwacja();
    return 0;
}

int* rezerwacja()
{
    return malloc(sizeof(int));
}
