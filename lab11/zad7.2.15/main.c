#include <stdio.h>
#include <stdlib.h>

enum zwierzak{
    KOT = 3,
    PIES = 4,
    CHOMIK = 5,
    PAPUGA = 6
};

int main()
{
    enum zwierzak a = PIES;
    printf("%u\n", a);
    return 0;
}
