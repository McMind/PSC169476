#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Ksiazka
{
    char tytul[50];
    int liczba_stron;
};

struct Ksiazka * initKsiazka(char tytul[50], int liczba_stron)
{
    if(liczba_stron <= 50 || strlen(tytul) < 5)
    {
        return NULL;
    }
    struct Ksiazka * wynik = malloc(sizeof(*wynik));
    wynik->liczba_stron = liczba_stron;
    strcpy(wynik->tytul,tytul);
    return wynik;
}

void pokazKsiazka(struct Ksiazka a)
{
    printf("Tytuł: %s, liczba stron: %d\n", a.tytul, a.liczba_stron);
}

void dodajStrony(struct Ksiazka * wsk)
{
    wsk->liczba_stron += 10;
}

int main()
{
    struct Ksiazka * a = initKsiazka("Hobbit", 320);
    if(a == NULL)
    {
        return -1;
    }
    pokazKsiazka(*a);
    dodajStrony(a);
    pokazKsiazka(*a);
    return 0;
}
