#include <stdio.h>
#include <stdlib.h>

struct element
{
    int i;
    struct element * next;
};

struct element * wyczysc(struct element * lista)
{
    struct element * wsk = lista;
    struct element * wsk2 = wsk;
    while(wsk != NULL)
    {
        wsk = wsk->next;
        free(wsk2);
        wsk2 = wsk;
    }
    return NULL;
}

int main()
{
    struct element * lista1 = malloc(sizeof(struct element));
    lista1->i = 3;
    lista1->next = malloc(sizeof(struct element));
    lista1->next->i = -7;
    lista1->next->next = NULL;
    printf("%p\n", lista1);
    lista1 = wyczysc(lista1);
    printf("%p\n", lista1);
    return 0;
}
