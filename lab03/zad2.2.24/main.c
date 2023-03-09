#include <stdio.h>
#include <stdlib.h>

int rekurencja(int n);

int main()
{
    printf("%d\n",rekurencja(0));
    printf("%d\n",rekurencja(1));
    printf("%d\n",rekurencja(2));
    printf("%d\n",rekurencja(3));
    printf("%d\n",rekurencja(4));
    printf("%d\n",rekurencja(5));
    return 0;
}

int rekurencja(int n){
    if(n < 2){
        return 1;
    }
    return 2 * rekurencja(n-1);
}
