#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void kopiuj(char * napis1, char * napis2);

int main()
{
    char * napis1 = "Hello";
    char * napis2 = malloc(strlen(napis1)*sizeof(char));
    printf("%s\n",napis1);
    kopiuj(napis1,napis2);
    printf("%s",napis2);
    return 0;
}

void kopiuj(char * napis1, char * napis2){
    strcpy(napis2,napis1);
}
