#include <stdio.h>
#include <stdlib.h>

char *PopuniLijevo (char *Str, int n){
    int vel=0;
    char* pom=Str;
    char* pom1=Str;
    int i=0, j=0;
    char* pok=Str;
    while (*pom!='\0'){
        vel++;
        pom++;
    }
    if (n==vel){
        return 0;
    }else {
        char* kraj=Str;
        while (*kraj!='\0'){
            kraj++;
        }
        char* pok=Str;
        while (kraj>Str){
            *(kraj+vel)=*pok;
            kraj--;
            pok++;
        }
        while (Str<kraj+vel){
            *Str=' ';
            Str++;
        }
        while (*(pom1+vel)!='\0'){
            *Str=*(pom1+vel);
        pom1++;
        Str++;
        }
    }
    return pok;
}

int main()
{
    char n1[100] = "Bosna", n2[100] = "Hercegovina";
    char *p1 = PopuniLijevo(n1, 15);
    char *p2 = PopuniLijevo(n2, 15);
    printf ("\n'%s'\n'%s'", p1, p2);
    return 0;
}
