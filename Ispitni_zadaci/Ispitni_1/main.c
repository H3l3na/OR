#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* izbaci_najduzu_rijec(char* s){
    char* s2=s;
    int brojac=0;
    int i=0;
    char* s1=s;
    int j=0;
    int max=0;
    char* najduza;
    while (*s1!='\0'){
        if (*s1==' '){
            while (*s1==' '){
                s1++;
            }
        }
        while ((*s1>='a' && *s1<='z') || (*s1)>='A' && *s1<='Z'){
            s1++;
            max++;
        }
    }
    int indeks;
    while (*(s+i)!='\0'){
        brojac=0;
        while ((*(s+i)>='a' && *(s+i)<='z') || (*(s+i)>='A' && *(s+i)<='Z')){
            brojac++;
            i++;
        }
        if (brojac>max){
            max=brojac;
            indeks=i;
            brojac=0;
            najduza=s-max;
        }
        if (*(s+i)!='\0'){
            i++;
        }
    }
    int indeks2=indeks-1;
    while (*(s-max)!='\0'){
        *(s-max)=*s;
        s++;
    }
    return s2;
}

int main()
{
    char s[]="Ovo je ta recenica";
    char* s1;
    s1=izbaci_najduzu_rijec(s);
    printf("%s", s1);
    return 0;
}
