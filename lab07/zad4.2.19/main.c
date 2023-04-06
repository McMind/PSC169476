#include <stdio.h>
#include <stdlib.h>

int * przepisz(int n, int * tab)
{
    int ilosc_0 = 0;
    for(int i = 0; i < n; i++)
    {
        if(*(tab + i) == 0)
        {
            ilosc_0++;
        }
    }
    ilosc_0 = 0;
    int * tab2 = malloc((n-ilosc_0)*sizeof(int));
    for(int i = 0; i < n; i++)
    {
        if(*(tab + i) != 0)
        {
            *(tab2 + ilosc_0++) = *(tab + i);
        }
    }
    return tab2;
}

int main()
{
    int wielkosc = 5;
    int * tab = malloc(wielkosc*sizeof(int));
    *tab = 0;
    *(tab + 1) = 3;
    *(tab + 2) = 0;
    *(tab + 3) = 0;
    *(tab + 4) = 5;
    int * tab2 = przepisz(wielkosc,tab);
    printf("%p\n%p\n",tab,tab2);
    return 0;
}
