#include <stdio.h>
#include <stdlib.h>

void wypisz(int n, int * tab);

void zad_a(int n, int * tab1, int * tab2, int * tab3);

void zad_b(int n, int * tab1, int * tab2, int * tab3);

void zad_c(int n, int * tab1, int * tab2, int * tab3);

int main()
{
    int n = 4;
    int tab1[] = {3,4,5,2};
    int tab2[] = {6,3,9,4};
    int * tab3 = malloc(n*sizeof(int));
    zad_a(n,tab1,tab2,tab3);
    wypisz(n,tab3);
    zad_b(n,tab1,tab2,tab3);
    wypisz(n,tab3);
    zad_c(n,tab1,tab2,tab3);
    wypisz(n,tab1);
    wypisz(n,tab2);
    wypisz(n,tab3);
    return 0;
}

void zad_a(int n, int * tab1, int * tab2, int * tab3)
{
    for(int i = 0; i < n; i++)
    {
        *(tab3 + i) = *(tab1 + i) + *(tab2 + i);
    }
}

void zad_b(int n, int * tab1, int * tab2, int * tab3)
{
    for(int i = 0; i < n; i++)
    {
        if(*(tab1 + i) > *(tab2 + i))
        {
            *(tab3 + i) = *(tab1 + i);
        }
        else
        {
            *(tab3 + i) = *(tab2 + i);
        }
    }
}

void zad_c(int n, int * tab1, int * tab2, int * tab3)
{
    for(int i = 0; i < n; i++)
    {
        *(tab2 + i) = *(tab1 + i);
    }
    for(int i = 0; i < n; i++)
    {
        *(tab3 + i) = *(tab2 + i);
    }
    for(int i = 0; i < n; i++)
    {
        *(tab1 + i) = *(tab3 + i);
    }
}

void wypisz(int n, int * tab)
{
    for(int i = 0; i < n; i++)
    {
        printf("tab[%d] = %d\n",i,*(tab + i));
    }
    printf("---\n");
}
