#include <stdio.h>
#include <stdlib.h>

char *IzbaciTekst (char *Str, const char *tekst){
    char* pom=Str;
    int vel3=0;
    char* k=tekst;
    while (*k!='\0'){
        k++;
        vel3++;
    }
    int vel=0, vel1=0;
    char* s;
    while (*Str!='\0'){
            vel1=0;
    vel=0;
            if (*Str==*tekst || *Str+32==*tekst || *Str-32==*tekst){
                char* pom1=Str;
                char* pom2=tekst;
                while (*pom1==*pom2 || *pom1+32==*pom2 || *pom1-32==*pom2){
                    pom1++;
                    pom2++;
                    vel++;
                }
                if (*pom1!='\0'){
                    while (*pom1!='\0'){
                        vel1++;
                        pom1++;
                    }
                }
                if  (*pom2=='\0'){
                    while (*Str==*tekst || *Str+32==*tekst || *Str-32==*tekst){
                        *Str=*(Str+vel3);
                        Str++;
                        tekst++;
                    }
                    while (*(Str+vel3)!='\0'){
                        *Str=*(Str+vel3);
                    Str++;
                    }
                    *(Str)='\0';

                }
            }
        Str++;
    }
    return pom;
}


int main()
{
    char niz[] = "Danas je divan dan!";//ispisuje: 'as je divan !'
    printf("'%s'", IzbaciTekst(niz, "dan"));
    return 0;
}
