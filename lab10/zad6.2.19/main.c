#include <stdio.h>
#include <stdlib.h>

void przepisz(int ** tab1, int ** tab2, int n, int m);

void wyswietl(int n, int m, int ** tab);

int main()
{
    int n = 2, m = 4;
    int ** tab1 = malloc(n*sizeof(int*));
    for(int i = 0; i < n; i++)
    {
        tab1[i] = malloc(m*sizeof(int));
    }
    tab1[0][0] = 0;
    tab1[0][1] = 0;
    tab1[0][2] = 3;
    tab1[0][3] = 4;
    tab1[1][0] = 2;
    tab1[1][1] = 3;
    tab1[1][2] = 1;
    tab1[1][3] = 5;
    int ** tab2 = malloc(n*sizeof(int*));
    for(int i = 0; i < n; i++)
    {
        tab2[i] = malloc(m*sizeof(int));
    }
    przepisz(tab1,tab2,n,m);
    wyswietl(n,m,tab2);
    return 0;
}

void przepisz(int ** tab1, int ** tab2, int n, int m)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            tab2[i][j] = tab1[i][j];
        }
    }
}

void wyswietl(int n, int m, int ** tab)
{
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            printf("[%d][%d]=%d ", i,j, tab[i][j]);
        }
        printf("\n");
    }
    printf("---\n");
}
