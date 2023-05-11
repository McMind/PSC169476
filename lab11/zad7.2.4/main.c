#include <stdio.h>
#include <stdlib.h>

struct punkt
{
    double x,y,z;
};

void przepisz(struct punkt tab1[], struct punkt tab2[], int n)
{
    for(int i = 0; i < n; i++)
    {
        tab2[i] = tab1[i];
    }
}

int main()
{
    struct punkt tab1[] = {{
            3.5,4.5,5.5
        },{
            8.5,-3.7,2.1
        },{
            9.7,3.2, -4.5
        }
    };
    struct punkt tab2[3];
    przepisz(tab1,tab2,3);
    return 0;
}
