#include <stdio.h>
#include <stdlib.h>

int max_ind_srd(int n, int m, int ** tab);

double srednia(int * tab, int n);

int main()
{
    int ** tab = malloc(3*sizeof(int*));
    for(int i = 0; i < 3; i++){
        tab[i] = malloc(4*sizeof(int));
    }
    tab[0][0] = 1;
    tab[0][1] = 2;
    tab[0][2] = 3;
    tab[0][3] = 2;
    tab[1][0] = 1;
    tab[1][1] = 2;
    tab[1][2] = 3;
    tab[1][3] = 4;
    tab[2][0] = 5;
    tab[2][1] = 1;
    tab[2][2] = 2;
    tab[2][3] = 1;

    printf("%d\n",max_ind_srd(3,4,tab));
    return 0;
}

double srednia(int * tab, int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += tab[i];
    }
    return sum/(double)n;
}

int max_ind_srd(int n, int m, int ** tab){
    double max_avg = srednia(tab[0],m);
    int max_ind = 0;
    for(int i = 1; i < n; i++){
        double avg = srednia(tab[i],m);
        if(avg - max_avg > 0.01){
            max_ind = i;
            max_avg = avg;
        }
    }
    return max_ind;
}
