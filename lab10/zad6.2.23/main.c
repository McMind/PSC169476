#include <stdio.h>
#include <stdlib.h>

void wyswietl(int n, int m, int ** tab);

void przesun_w_prawo_2d(int **tab, int n, int m);

int main()
{
    int n = 3, m = 4;
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
    tab1[2][0] = 4;
    tab1[2][1] = 8;
    tab1[2][2] = 1;
    tab1[2][3] = 5;
    wyswietl(n,m,tab1);
    przesun_w_prawo_2d(tab1,n,m);
    wyswietl(n,m,tab1);
    return 0;
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

void przesun_w_prawo_2d(int **tab, int n, int m)
{
    int * pom = tab[n-1];
    for(int i=n-1; i > 0; i--)
    {
        tab[i]=tab[i-1];
    }
    tab[0] = pom;
}
