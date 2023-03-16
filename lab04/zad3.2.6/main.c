#include <stdio.h>
#include <stdlib.h>

void przepisz(int n, int* w);

int main()
{
    int n = 14;
    int w = 9;
    przepisz(n,&w);
    return 0;
}

void przepisz(int n, int* w){
    *w = n;
}
