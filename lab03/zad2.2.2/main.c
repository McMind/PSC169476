#include <stdio.h>
#include <stdlib.h>

int silnia(int n);

int main()
{
    int n;
    scanf("%d",&n);
    int wynik = silnia(n);
    printf("%d\n",wynik);
    return 0;
}

int silnia(int n)
{
    int wynik = 1;
    for(int i = 1; i <= n; i++)
    {
        wynik *= i;
    }
    return wynik;
}
