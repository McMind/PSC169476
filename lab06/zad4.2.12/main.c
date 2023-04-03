#include <stdio.h>
#include <stdlib.h>

void zad_a(int n, int * tab);

void zad_b(int n, int * tab);

void zad_c(int n, int * tab);

void zad_d(int n, int * tab);

void zad_e(int n, int * tab);

int main()
{
    int n = 7;
    int tab[] = {1,2,3,4,5,6,7};
    int tab2[] = {3,6,1,3,2,0,4};
    zad_a(n,tab);
    zad_b(n,tab);
    zad_c(n,tab);
    zad_d(n,tab2);
    zad_e(n,tab2);
    return 0;
}

void zad_a(int n, int * tab)
{
    for(int i = 0; i < n/2; i++)
    {
        int tmp = tab[n-1-i];
        tab[n-1-i] = tab[i];
        tab[i] = tmp;
    }
}

void zad_b(int n, int * tab)
{
    int tmp = tab[0];
    for(int i = 0; i < n-1; i++)
    {
        tab[i] = tab[i+1];
    }
    tab[n-1] = tmp;
}

void zad_c(int n, int * tab)
{
    int tmp = tab[n-1];
    for(int i = 0; i < n; i++)
    {
        tab[n-i] = tab[n-1-i];
    }
    tab[0] = tmp;
}

void zad_d(int n, int * tab)
{
    int srt = 0;
    while(srt != n - 1)
    {
        srt = 0;
        for(int i = 0; i < n - 1; i++)
        {
            if(tab[i] > tab[i+1])
            {
                int tmp = tab[i];
                tab[i] =  tab[i+1];
                tab[i+1] = tmp;
            }
            else
            {
                srt++;
            }
        }
    }
}

void zad_e(int n, int * tab)
{
    int srt = 0;
    while(srt != n - 1)
    {
        srt = 0;
        for(int i = 0; i < n - 1; i++)
        {
            if(tab[i] < tab[i+1])
            {
                int tmp = tab[i];
                tab[i] =  tab[i+1];
                tab[i+1] = tmp;
            }
            else
            {
                srt++;
            }
        }
    }
}
