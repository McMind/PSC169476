#include <stdio.h>
#include <stdlib.h>

int pierwiastek(int n);

int main()
{
    int n;
    scanf("%d",&n);
    int wynik = pierwiastek(n);
    printf("%d\n",wynik);
    return 0;
}

int pierwiastek(int n)
{
    int i = 1;
    while(i*i<=n)
    {
        i++;
    }
    return i-1;
}
