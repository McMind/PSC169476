#include <stdio.h>
#include <stdlib.h>

int zad_a(int n, int * tab);

int zad_b(int n, int * tab);

int zad_c(int n, int * tab);

int zad_d(int n, int * tab);

int zad_e(int n, int * tab);

int zad_f(int n, int * tab);

int main()
{
    int n = 4, m = 6;
    int tab[] = {3,1,2,5};
    int tab2[] = {-1,3,-2,-5,4};
    printf("%d\n",zad_a(n,tab));
    printf("%d\n",zad_b(n,tab));
    printf("%d\n",zad_c(n,tab));
    printf("%d\n",zad_d(n,tab));
    printf("%d\n",zad_e(m,tab2));
    printf("%d\n",zad_f(m,tab2));
    return 0;
}

int zad_a(int n, int * tab)
{
    int wynik = tab[0];
    for(int i = 1; i < n; i++)
    {
        if(tab[i] > wynik)
        {
            wynik = tab[i];
        }
    }
    return wynik;
}

int zad_b(int n, int * tab)
{
    int wynik = tab[0];
    for(int i = 1; i < n; i++)
    {
        if(tab[i] < wynik)
        {
            wynik = tab[i];
        }
    }
    return wynik;
}

int zad_c(int n, int * tab)
{
    int wynik = tab[0];
    int indeks = 0;
    for(int i = 1; i < n; i++)
    {
        if(tab[i] > wynik)
        {
            wynik = tab[i];
            indeks = i;
        }
    }
    return indeks;
}

int zad_d(int n, int * tab)
{
    int wynik = tab[0];
    int indeks = 0;
    for(int i = 1; i < n; i++)
    {
        if(tab[i] < wynik)
        {
            wynik = tab[i];
            indeks = i;
        }
    }
    return indeks;
}

int zad_e(int n, int * tab)
{
    int wynik = tab[0];
    for(int i = 1; i < n; i++)
    {
        if(abs(tab[i]) > abs(wynik))
        {
            wynik = tab[i];
        }
    }
    return wynik;
}

int zad_f(int n, int * tab)
{
    int wynik = tab[0];
    int indeks = 0;
    for(int i = 1; i < n; i++)
    {
        if(abs(tab[i]) > abs(wynik))
        {
            wynik = tab[i];
            indeks = i;
        }
    }
    return indeks;
}


