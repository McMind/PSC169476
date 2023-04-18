#include <stdio.h>
#include <stdlib.h>

void sklej(char * tab1, char * tab2, char * tab3)
{
    int j = 0;
    for(int i = 0; tab1[i]; i++)
    {
        tab3[j++] = tab1[i];
    }
    for(int i = 0; tab2[i]; i++)
    {
        tab3[j++] = tab2[i];
    }
}

int main()
{
    char * t1 = "Ala m";
    char * t2 = "a kota";
    char t3[15];
    sklej(t1,t2,t3);
    printf("%s",t3);
    return 0;
}
