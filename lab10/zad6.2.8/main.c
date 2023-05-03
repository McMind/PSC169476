#include <stdio.h>
#include <stdlib.h>

void wypelnij_zero(int tab[][100], int n);

int main()
{
    int tab[3][100];
    wypelnij_zero(tab,3);
    return 0;
}

void wypelnij_zero(int tab[][100], int n)
{
    for(int i = 0; i < n; i++)
    {
        for(int j=0; j < 100; j++)
        {
            tab[i][j] = 0;
        }
    }
}
