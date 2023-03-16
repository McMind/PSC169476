#include <stdio.h>
#include <stdlib.h>

void przepisz(const int* a, int* b);

int main()
{
    int a = 4, b = 15;
    przepisz(&a,&b);
    return 0;
}

void przepisz(const int* a, int* b){
    *b = *a;
}
