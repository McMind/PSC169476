#include <stdio.h>
#include <stdlib.h>

int suma(int n, int m, int tab[][m]);

int main()
{
    int tab[][4] = {{3,2,1,4},{5,2,1,5},{7,5,1,2},{8,5,3,2}};
    printf("%d\n",suma(4,4,tab));
    return 0;
}

int suma(int n, int m, int tab[][m]){
    int suma = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            suma += tab[i][j];
        }
    }
    return suma;
}
