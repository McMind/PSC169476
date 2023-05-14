#include <stdio.h>
#include <stdlib.h>

union Liczba{
    int cal;
    double wym;
};

struct Dane{
    int tp;
    union Liczba zaw;
};

struct Dane wczytaj(){
    struct Dane wynik;
    printf("jakiego typu liczbę chcesz wczytać?\n");
    printf("0 - wymierna, 1 - całkowita:\n");
    scanf("%d", &wynik.tp);
    if(wynik.tp){
        printf("Podaj liczbę całkowitą:\n");
        scanf("%d", &wynik.zaw.cal);
    }else{
        printf("Podaj liczbę wymierną:\n");
        scanf("%lf", &wynik.zaw.wym);
    }
    return wynik;
};

int main()
{
    struct Dane a = wczytaj();
    if(a.tp){
        printf("\n%d\n", a.zaw.cal);
    }else{
        printf("\n%lf\n", a.zaw.wym);
    }
    return 0;
}
