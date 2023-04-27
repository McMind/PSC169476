#include <stdio.h>
#include <stdlib.h>

int ** tablica_2d(int n, int m);

int main()
{
    int n = 3, m = 4;
    printf("%p",tablica_2d(n,m));
    return 0;
}

int ** tablica_2d(int n, int m)
{
    int ** tab = malloc(n*sizeof(int*));
    for(int i = 0; i < n; i++)
    {
        *(tab + i) = malloc(m*sizeof(int));
    }
    return tab;
}
