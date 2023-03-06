#include <stdio.h>
#include <stdlib.h>
#include <windef.h>

int nwd(int n, int m);

int main()
{
    int n, m, wynik;
    scanf("%d",&n);
    scanf("%d",&m);
    wynik = nwd(n,m);
    printf("%d\n",wynik);
    return 0;
}

int nwd(int n, int m)
{
    int mniejsza = min(n,m);
    int wieksza = max(n,m);
    int reszta;
    while(wieksza)
    {
        reszta = wieksza % mniejsza;
        if(!reszta)
        {
            return mniejsza;
        }
        wieksza = mniejsza;
        mniejsza = reszta;
    }
}
