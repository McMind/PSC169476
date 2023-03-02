#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,k;
    scanf("%d",&n);
    scanf("%d",&m);
    scanf("%d",&k);
    for(int i = n; i < k; i+=n)
    {
        if(i > m)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
