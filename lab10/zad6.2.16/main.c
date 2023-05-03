#include <stdio.h>
#include <stdlib.h>

int max_ind_srd(int n, int m, int tab[][m]);

double srednia(int tab[], int n);

int main()
{
    int tab[][4] = {{1,2,3,2},{1,2,3,4},{5,1,2,1}};
    printf("%d\n",max_ind_srd(3,4,tab));
    return 0;
}

double srednia(int tab[], int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += tab[i];
    }
    return sum/(double)n;
}

int max_ind_srd(int n, int m, int tab[][m]){
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
