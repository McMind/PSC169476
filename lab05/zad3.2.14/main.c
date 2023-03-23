#include <stdio.h>
#include <stdlib.h>

int funkcja(int(*wzk1)(int),int(*wzk2)(int), unsigned int n);

int test1(int a);

int test2(int a);

int main()
{
    int wynik = funkcja(test1,test2,5);
    printf("%d",wynik);
    return 0;
}

int funkcja(int(*wzk1)(int),int(*wzk2)(int), unsigned int n)
{
    for(int i=0; i <=n; i++)
    {
        if(wzk1(i) != wzk2(i))
        {
            return 0;
        }
    }
    return 1;
}

int test1(int a)
{
    return a+3;
}

int test2(int a)
{
    return (a+3)%10;
}
