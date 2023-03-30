#include <stdio.h>
#include <stdlib.h>

void zad_a(int n, int * tab1, int * tab2);

void zad_b(int n, int * tab1, int * tab2);

void wypisz(int n, int * tab);

int main()
{
    int *tab1 = malloc(4*sizeof(int));
    int *tab2 = malloc(4*sizeof(int));
    int *tab3 = malloc(4*sizeof(int));
    *tab1 = 3;
    *(tab1 + 1) = 4;
    *(tab1 + 2) = 5;
    *(tab1 + 3) = 1;
    *tab2 = 5;
    *(tab2 + 1) = 2;
    *(tab2 + 2) = 8;
    *(tab2 + 3) = 9;
    *tab3 = 6;
    *(tab3 + 1) = 1;
    *(tab3 + 2) = 4;
    *(tab3 + 3) = 2;
    wypisz(4,tab2);
    zad_a(4,tab1,tab2);
    wypisz(4,tab1);
    wypisz(4,tab2);
    wypisz(4,tab3);
    zad_b(4,tab3,tab2);
    wypisz(4,tab2);
    return 0;
}

void zad_a(int n, int * tab1, int * tab2)
{
    for(int i = 0; i < n; i++)
    {
        *(tab2 + i) = *(tab1 + i);
    }
}

void zad_b(int n, int * tab1, int * tab2)
{
    for(int i = 0; i < n; i++)
    {
        *(tab2 + n - i - 1) = *(tab1 + i);
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
