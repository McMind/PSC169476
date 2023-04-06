#include <stdio.h>
#include <stdlib.h>

void zwolnij(double * tab){
    free(tab);
}

int main()
{
    double *tab = malloc(4*sizeof(double));
    *tab = 3.2;
    *(tab + 1) = 4.5;
    zwolnij(tab);
    return 0;
}
