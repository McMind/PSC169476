#include <stdio.h>
#include <stdlib.h>

int licznik = 0;

void funkcja();

int main()
{
    funkcja();
    funkcja();
    funkcja();
    return 0;
}

void funkcja()
{
    printf("%d\n",++licznik);
}
