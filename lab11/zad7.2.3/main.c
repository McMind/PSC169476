#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct punkt
{
    double x,y,z;
};

double min_odleglosc(struct punkt tab[], int n)
{
    double pom;
    double min = sqrt((pow(tab[1].x-tab[0].x,2)) + (pow(tab[1].y-tab[0].y,2)) + (pow(tab[1].z-tab[0].z,2)));
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            pom = sqrt((pow(tab[j].x-tab[i].x,2)) + (pow(tab[j].y-tab[i].y,2)) + (pow(tab[j].z-tab[i].z,2)));
            if(pom - min < 0.01)
            {
                min = pom;
            }
        }
    }
    return min;
}

int main()
{
    struct punkt tab1[] =
    {
        {
            3.5,4.5,5.5
        },{
            -5.3,0.4,2.3
        },{
            -2,3.3,-1
        }
    };
    printf("%lf",min_odleglosc(tab1,3));
    return 0;
}
