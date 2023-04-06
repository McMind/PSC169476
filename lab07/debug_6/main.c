#include <stdio.h>
#include <stdlib.h>

int foo(int*a,int*b)
{
    if (*a>*b)
        return *a;
    return *b;
}

int main()
{
    int tab[] = {1,-1,5,-8,3,4,-2,2,9,8};
    int *wsk=tab-1;
    int b = *(wsk+=3); //b=5
    int c = b+2; // b=5  , c=7
    int d = foo(&b,&c); // b=5  , c=7  , d=7
    int e = (wsk+=1)[2]; // b=5  , c= 7 , d=7  , e=4
    e = (d *= 8) + (c /= 3); // b=5  , c=2  , d=56  , e=58
    b = (c += 8) + (e -= 3); // b=65  , c=10  , d=56  , e=55
    c = d - (b+=8); // b=73  , c=-17  , d=56  , e=55
    b = *wsk + e; // b=47  , c=-17  , d=56  , e=55
    return 0;
}
