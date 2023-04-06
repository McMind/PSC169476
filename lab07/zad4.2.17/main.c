#include <stdio.h>
#include <stdlib.h>

double * kopia(int n, double * tab)
{
    double *tab2 = malloc(n*sizeof(double));
    for(int i = 0; i < n; i++)
    {
        *(tab2 + i) = *(tab + i);
    }
    return tab2;
}

int main()
{
    int wielkosc = 4;
    double * tab1 = malloc(wielkosc*sizeof(double));
    *tab1 = 3.1;
    *(tab1 + 1) = 2.5;
    *(tab1 + 2) = 6.8;
    *(tab1 + 3) = 14.05;
    printf("%p",kopia(wielkosc,tab1));
    return 0;
}
