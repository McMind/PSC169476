#include <stdio.h>
#include <stdlib.h>

int silnia_rekurencja(int n);

int main()
{
    int n;
    scanf("%d",&n);
    int wynik = silnia_rekurencja(n);
    printf("%d\n",wynik);
    return 0;
}

int silnia_rekurencja(int n)
{
    if(n<2){
        return 1;
    }
    return silnia_rekurencja(n-1)*n;
}
