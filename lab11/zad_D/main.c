#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Laptop{
    char model[30];
    float cena;
};

struct Laptop initLaptop(char model[30], float cena){
    struct Laptop wynik;
    wynik.cena = cena;
    strcpy(wynik.model,model);
    return wynik;
}

void pokazLaptop(struct Laptop a){
    printf("Model: %s, cena: %7.2fzł\n", a.model, a.cena);
}

void zmniejszCene(struct Laptop * wsk){
    wsk->cena *= 0.95;
}

int main()
{
    struct Laptop a = initLaptop("Gigabyte",6999.99);
    pokazLaptop(a);
    zmniejszCene(&a);
    pokazLaptop(a);
    return 0;
}
