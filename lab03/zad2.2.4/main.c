#include <stdio.h>
#include <stdlib.h>

int potega2(int n);

int main()
{
    int n;
    scanf("%d",&n);
    int wynik = potega2(n);
    printf("%d\n",wynik);
    return 0;
}

int potega2(int n)
{
    int wynik = 1;
    for(int i = 0; i < n; i++)
    {
        wynik *= 2;
    }
    return wynik;
}
