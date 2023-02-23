#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    double srednia = (a+b+c)/(float)3;
    printf("%lf\n",srednia);
    return 0;
}
