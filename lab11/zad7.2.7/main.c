#include <stdio.h>
#include <stdlib.h>

struct zespolone{
    double re,im;
};

struct zespolone suma(struct zespolone a, struct zespolone b){
    struct zespolone sum;
    sum.re = a.re + b.re;
    sum.im = a.im + b.im;
    return sum;
}

int main()
{
    struct zespolone a = {3,-4};
    struct zespolone b = {7,8};
    struct zespolone sum = suma(a,b);
    printf("%lf+%lfi",sum.re,sum.im);
    return 0;
}
