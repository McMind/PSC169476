#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m, iloczyn = 1;
    scanf("%d",&n);
    scanf("%d",&m);
    while(n <= m){
        iloczyn *= n++;
    }
    printf("%d\n",iloczyn);
    return 0;
}
