#include <stdio.h>
#include <stdlib.h>

int *** tablica_3d(int n, int m, int l);

void skasuj_3d(int *** tab, int n, int m, int l);

int main()
{
    int n = 3, m = 4, l = 5;
    int *** nowa = tablica_3d(n,m,l);
    printf("%p",nowa);
    skasuj_3d(nowa,n,m,l);
    return 0;
}

int *** tablica_3d(int n, int m, int l){
    int *** tab = malloc(n*sizeof(int**));
    for(int i = 0; i < n; i++){
        *(tab + i) = malloc(m*sizeof(int*));
        for(int j = 0; j < m; j++){
            *(*(tab + i) + j) = malloc(l*sizeof(int));
        }
    }
    return tab;
}

void skasuj_3d(int *** tab, int n, int m, int l){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            free(*(*(tab + i) + j));
        }
        free(*(tab + i));
    }
    free(tab);
}
