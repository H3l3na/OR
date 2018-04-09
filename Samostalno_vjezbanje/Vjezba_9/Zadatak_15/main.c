#include <stdio.h>
#include <stdlib.h>

void NtaRijec (const char *Str, char *rijec, int n){
    char* pom=Str;
    int br_rijeci=1;
    while (*pom!='\0'){
        pom++;
        br_rijeci++;
    }
    int br=1;
    int i=0;
    while (*Str!='\0'){
        i=0;
        if (*Str==' '){
            br++;
        }
        if (br==n){
           // Str++;
           char* po=Str;
            while (*po!=' ' || *po!='\0'){
                rijec[i]=*po;
                i++;
                po++;
            }

        }
        Str++;
    }
    return rijec;
}


int main()
{
    const char *tekst = "Zeko pije mlijeko! ";
    char rijec[101]; //pretpostavimo da nije duza od 100 znakova
    NtaRijec(tekst, rijec, 3); // 2. rijec po redu ("pije")
    printf ("2. rijec: '%s'", rijec);
    return 0;
}
