#include <stdio.h>
#include <stdlib.h>

union super_int
{
    int x;
    unsigned int y;
};

int main()
{
    union super_int liczba = {8};
    printf("%d\n", liczba.x);
    printf("%u\n", liczba.y);
    return 0;
}
