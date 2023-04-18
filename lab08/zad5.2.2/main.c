#include <stdio.h>
#include <stdlib.h>

int dlugosc(char * napis)
{
    int ilosc = 0;
    for (int i = 0; napis[i] != 0; i++)
    {
        ilosc++;
    }
    return ilosc;
}

int main()
{
    char nap[] = "Lorem ipsum";
    printf("Długość '%s' wynosi: %d\n",nap,dlugosc(nap));
    return 0;
}
