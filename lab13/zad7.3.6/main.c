#include <stdio.h>
#include <stdlib.h>

struct element
{
    int i;
    struct element * next;
};

struct element * znajdz(struct element * lista, int a)
{
    struct element * wsk = lista;
    while(wsk != NULL)
    {
        if(wsk->i == a)
        {
            return wsk;
        }
        wsk = wsk->next;
    }
    return NULL;
}

int main()
{
    int b = 4;
    struct element * lista1 = malloc(sizeof(struct element));
    lista1->i = 8;
    lista1->next = malloc(sizeof(struct element));
    lista1->next->i = 4;
    lista1->next->next = malloc(sizeof(struct element));
    lista1->next->next->i = 6;
    lista1->next->next->next = NULL;
    struct element * lista2 = znajdz(lista1,b);
    printf("%p\n",lista1);
    printf("%p\n",lista2);
    return 0;
}
