#include <stdio.h>
#include <stdlib.h>

double * double_tab(int n)
{
    double * tab = malloc(n*sizeof(double));
    return tab;
}

int main()
{
    int wielkosc = 5;
    printf("%p",double_tab(wielkosc));
    return 0;
}
