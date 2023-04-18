#include <stdio.h>
#include <stdlib.h>

int dlugosc(char * napis)
{
    int ilosc = 0;
    for (int i = 0; napis[i]; i++)
    {
        ilosc++;
    }
    return ilosc;
}

void wytnij(char * napis, int n, int m)
{
    int roz = m - n + 1;
    int dlu = dlugosc(napis);
    if(m >= dlu)
    {
        napis[n] = 0;
        return;
    }
    for (int i = n; i <= dlu; i++)
    {
        napis[i] = napis[i + roz];
    }
}


int main()
{
    char t1[] = "olsztynnnn";
    wytnij(t1,2,4);
    printf("%s.",t1);
    return 0;
}
