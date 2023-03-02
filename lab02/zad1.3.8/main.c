#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int wybor;
    printf("Wybierz figurę\n(1) - kwadrat\n(2) - prostokąt\n(3) - trójkąt\n");
    scanf("%d",&wybor);
    double a, b, c, p, wynik;
    switch(wybor)
    {
        case 1:
            scanf("%lf",&a);
            wynik = pow(a,2);
            printf("%lf\n",wynik);
            break;
        case 2:
            scanf("%lf",&a);
            scanf("%lf",&b);
            wynik = a*b;
            printf("%lf\n",wynik);
            break;
        case 3:
            scanf("%lf",&a);
            scanf("%lf",&b);
            scanf("%lf",&c);
            p = (a+b+c)/2;
            wynik = sqrt(p*(p-a)*(p-b)*(p-c));
            printf("%lf\n",wynik);
    }
    return 0;
}
