#include <stdio.h>
#include <stdlib.h>

void przepisz(char * tab1, char * tab2){
    for (int i = 0; tab1[i] != 0; i++){
        tab2[i] = tab1[i];
    }
}

int main()
{
    char t1[] = "nepnop";
    char t2[10];
    przepisz(t1,t2);
    printf("Stary napis: %s\nNowy napis: %s.\n",t1,t2);
    return 0;
}
