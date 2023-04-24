#include <stdio.h>
#include <stdlib.h>

void wytnijzn(char * nap1, char * nap2);

int czy_nie_istnieje(char znak, char * ciag);

void przesun_o_jeden_w_lewo(int a, char * nap);

int main()
{
    char napis1[] = "lorem ipsum";
    char napis2[] = "more i think";
    printf("%s\n",napis1);
    wytnijzn(napis1,napis2);
    printf("%s",napis1);
    return 0;
}

void wytnijzn(char * nap1, char * nap2)
{
    for(int i = 0; nap1[i]; i++)
    {
        if(czy_nie_istnieje(nap1[i],nap2)){
            przesun_o_jeden_w_lewo(i--,nap1);
        }
    }
}

int czy_nie_istnieje(char znak, char * ciag)
{
    for(int i = 0; ciag[i]; i++)
    {
        if(znak == ciag[i])
        {
            return 0; //znak istnieje
        }
    }
    return 1; //znak nie istnieje
}

void przesun_o_jeden_w_lewo(int i, char * nap)
{
    while(nap[i])
    {
        nap[i] = nap[i + 1];
        i++;
    }
}
