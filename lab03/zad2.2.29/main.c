#include <stdio.h>
#include <stdlib.h>

int nwd(int n, int m);

int main()
{
    printf("%d",nwd(78,282));
    return 0;
}

int nwd(int n, int m)
{
    if(n<m)
    {
        return nwd(m,n);
    }
    int reszta = n % m;
    if(!reszta)
    {
        return m;
    }
    return nwd(m,reszta);
}
