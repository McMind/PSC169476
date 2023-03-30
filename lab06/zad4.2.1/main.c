#include <stdio.h>
#include <stdlib.h>

void zad_a(int n, int * tab);

void zad_b(int n, int tab[]);

void zad_c(int n, int * tab);

void zad_d(int n, int tab[]);

int main()
{
    int tab1[] = {3,2,1,0,5,-3};
    int tab2[] = {4,1,2};
    int tab3[] = {1,3,5,-2,4};
    int tab4[] = {-3,-2,1,0,-5,4};
    zad_a(6,tab1);
    zad_b(3,tab2);
    zad_c(5,tab3);
    zad_d(6,tab4);
    return 0;
}

void zad_a(int n, int * tab)
{
    for(int i = 0; i < n; i++)
    {
        *(tab + i) = 0;
    }
}

void zad_b(int n, int tab[])
{
    for(int i = 0; i < n; i++)
    {
        tab[i] = i;
    }
}

void zad_c(int n, int * tab)
{
    for(int i = 0; i < n; i++)
    {
        *(tab + i) *= 2;
    }
}

void zad_d(int n, int tab[])
{
    for(int i = 0; i < n; i++)
    {
        if(tab[i] < 0)
        {
            tab[i] *= -1;
        }
    }
}
