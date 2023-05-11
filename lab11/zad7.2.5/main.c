#include <stdio.h>
#include <stdlib.h>

struct punkt10
{
    double wsp[10];
};

void przepisz(struct punkt10 tab1[], struct punkt10 tab2[], int n)
{
    for(int i = 0; i < n; i++)
    {
        tab2[i] = tab1[i];
    }
}

int main()
{
    struct punkt10 tab1[] = {{
            {3,5,4,2,1,6,4,2,9,2}
        },{
            {7,2,3,4,9,1,45,3,2,0}
        },{
            {7,4,2,7,4,3,6,4,2,1}
        }
    };
    struct punkt10 tab2[3];
    przepisz(tab1,tab2,3);
    return 0;
}
