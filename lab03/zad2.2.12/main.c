#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int pierwiastek(int n, int m);

int suma(int n, int m);

int main()
{
    int n,m;
    scanf("%d",&n);
    scanf("%d",&m);
    int wynik = suma(n,m);
    printf("%d\n",wynik);
    return 0;
}

int pierwiastek(int n, int m)
{
    int i = 1;
    while(pow(i,m)<=n)
    {
        i++;
    }
    return i-1;
}

int suma(int n, int m)
{
    int wynik = 0;
    for(int i = 1; i <= n; i++)
    {
        wynik += pierwiastek(i,m);
    }
    return wynik;
}
