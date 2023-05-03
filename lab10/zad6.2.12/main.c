#include <stdio.h>
#include <stdlib.h>

int suma(int n, int m, int ** tab);

int main()
{
    int ** tab = malloc(4*sizeof(int*));
    for(int i = 0; i < 4; i++){
        tab[i] = malloc(4*sizeof(int));
    }
    tab[0][0] = 3;
    tab[0][1] = 2;
    tab[0][2] = 1;
    tab[0][3] = 4;
    tab[1][0] = 5;
    tab[1][1] = 2;
    tab[1][2] = 1;
    tab[1][3] = 5;
    tab[2][0] = 7;
    tab[2][1] = 5;
    tab[2][2] = 1;
    tab[2][3] = 2;
    tab[3][0] = 8;
    tab[3][1] = 5;
    tab[3][2] = 3;
    tab[3][3] = 2;
    printf("%d\n",suma(4,4,tab));
    return 0;
}

int suma(int n, int m, int ** tab){
    int suma = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            suma += tab[i][j];
        }
    }
    return suma;
}
