#include <stdio.h>
#include <stdlib.h>

int Prebroji (const char *Str, const char *slova){
    int suma=0;
    char* pom=slova;
    while (*Str!='\0'){
        while (*slova!='\0'){
                if (*Str==*slova){
                    suma++;
                }
                slova++;
        }
        slova=pom;
        Str++;
    }
    if (suma!=0){
    return suma+1;}
    return suma;
}


int main()
{
    printf ("%d\n", Prebroji("Otorinolaringologija", "oag")); //9
    printf ("%d", Prebroji("Danas", "ad")); //3
    return 0;
}
