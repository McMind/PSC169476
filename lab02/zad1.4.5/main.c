#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, suma = 0;
    scanf("%d",&a);
    for(int i = 0; i <= a; i++)
    {
        suma += pow(i,2);
    }
    printf("%d\n",suma);
    return 0;
}
