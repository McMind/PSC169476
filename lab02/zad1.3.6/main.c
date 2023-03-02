#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a1,b1,c1,a2,b2,c2,wg,wa,wb,x,y;
    scanf("%lf",&a1);
    scanf("%lf",&b1);
    scanf("%lf",&c1);
    scanf("%lf",&a2);
    scanf("%lf",&b2);
    scanf("%lf",&c2);
    wg = a1*b2-b1*a2;
    if(wg == 0){
        printf("Brak albo nieskończenie wiele rozwiązań\n");
        return 0;
    }
    wa = c1*b2-b1*c2;
    wb = a1*c2-c1*a2;
    x = wa/wg;
    y = wb/wg;
    printf("x = %lf, y = %lf\n",x,y);
    return 0;
}
