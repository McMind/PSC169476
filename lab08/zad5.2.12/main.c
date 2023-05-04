#include <stdio.h>
#include <stdlib.h>

void wytnijzn(char * nap1, char * nap2);

int czy_nie_istnieje(char znak, char * ciag);

void przesun_o_jeden_w_lewo(int i, char * nap, int * j);

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
    int j = 0, i;
    for(i = 0; nap1[i]; i++)
    {
        if(czy_nie_istnieje(nap1[i],nap2))
        {
            przesun_o_jeden_w_lewo(i--,nap1,&j);
        }
    }
    nap1[i-j] = 0;
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

void przesun_o_jeden_w_lewo(int i, char * nap, int * j)
{
    while(nap[i])
    {
        int y = 1;
        for(int k = 0; k <= *j; k++)
        {
            if(nap[i + k + 1] == 0)
            {
                y = 0;
                break;
            }
        }
        if(y)
        {
            nap[i] = nap[i + 1];
            i++;
        }
        else
        {
            break;
        }
    }
    *j += 1;
}
