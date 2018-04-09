#include <stdio.h>
#include <stdlib.h>

char *IzbaciViskaRazmake (char *Str){
    char* poc=Str;
    int br_razmaka=0;
    char* pomocni;
    int i=0;
    int brojac=0;
    char* pom2;
    int flag=0;
    while (*Str!='\0'){
        br_razmaka=0;
        brojac=0;
        flag=0;
        char* pom;
        if (*Str==' '){
             pom2=Str;
            while (*Str==' '){
                br_razmaka++;
                Str++;
            }
            pom=Str;
        }
        if (br_razmaka>1){
                flag=1;
            pomocni=Str-br_razmaka+1;
            while (*(pomocni+br_razmaka-1)!='\0'){
                *pomocni=*(pomocni+br_razmaka);
                pomocni++;
            }
            *pomocni='\0';
        }
        if (flag==1){
            Str=pom;
        }
        Str++;
    }
    return poc;
}

int main()
{
    printf("%s", IzbaciViskaRazmake("Ovo je     OR"));
    return 0;
}
