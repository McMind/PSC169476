#include <stdio.h>
#include <stdlib.h>

int rekurencja(int n)
{
    if(n < 2)
    {
        return 1;
    }
    if(n % 3 == 0)
    {
        return rekurencja(n/3);
    }
    if(n % 3 == 1)
    {
        return rekurencja(n/3) + 1;
    }
    return rekurencja(n-1)-1;
}

int main()
{
    int wynik0 = rekurencja(0);
    int wynik1 = rekurencja(1);
    int wynik2 = rekurencja(2);
    int wynik3 = rekurencja(3);
    int wynik4 = rekurencja(4);
    int wynik5 = rekurencja(5);
    int wynik6 = rekurencja(6);
    int wynik7 = rekurencja(7);
    return 0;
}
