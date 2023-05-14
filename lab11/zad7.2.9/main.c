#include <stdio.h>
#include <stdlib.h>

struct lista{
    int nr;
    struct lista * wsk;
};

int main()
{
    struct lista lista1 = {5,&lista1};
    printf("%d , %p\n", lista1.nr, lista1.wsk);
    return 0;
}
