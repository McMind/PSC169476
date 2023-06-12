#include <stdio.h>
#include <stdlib.h>

int ileLiczb(char str1[])
{
    static int ilosc = 0;
    if(*str1)
    {
        ileLiczb(str1+1);
        if(*str1 >= 48 && *str1 <= 57)
        {
            ilosc++;
        }
    }
    return ilosc;
}

int main()
{
    char napis[] = "0lM4k19a";
    printf("Ilość liczb w stringu %s to: %d.\n",napis,ileLiczb(napis));
    return 0;
}
