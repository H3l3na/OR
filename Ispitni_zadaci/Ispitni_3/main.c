#include <stdio.h>
#include <stdlib.h>
/*
int duzina(char* s){
    int brojac=0;
    int i=0;
    int max=0;
    while (*(s+i)!='\0'){
        brojac=0;
        if ((*(s+i)>='a' && *(s+i)<='z') || (*(s+i)>='A' && *(s+i)<='Z')){
            while ((*(s+i)>='a' && *(s+i)<='z') || (*(s+i)>='A' && *(s+i)<='Z')){
                i++;
                brojac++;
            }
            if (brojac>max){
                max=brojac;
            }
        }
        if (*(s+i)!='\0'){
            i++;
        }
    }
    return max;
}*/


int razlika(char* s){
    int brojac=0, brojac_rijeci=0;
    char* pom=s;
    while (*s!='\0'){
            brojac=0;
    while ((*s>='a' && *s<='z') || (*s>='A' && *s<='Z')){
            brojac++;
    s++;
    }
    if (brojac>0){
        brojac_rijeci++;
    }
    if (*s!='\0'){
        s++;
    }
    }
    if (brojac_rijeci==0 || brojac_rijeci==1){
        return -1;
    }
    int min=0, max=0, brojac1=0;
    int i=0;
    if (*(pom+i)==' '){
        while (*(pom+i)==' '){
            i++;
        }
    }
    while ((*(pom+i)>='a' && *(pom+i)<='z') || (*(pom+i)>='A' && *(pom+i)<='Z')){
        min++;
        i++;
    }
    max=min;
    while (*pom!='\0'){
            brojac1=0;
    while ((*pom>='a' && *pom<='z') || (*pom>='A' && *pom<='Z')){
            brojac1++;
            pom++;
    }
    if (brojac1<min){
        min=brojac1;
    }
    if (brojac1> max){
        max=brojac1;
    }
    if (*pom!='\0'){
        pom++;
    }
    }
    return max-min;
}

int main()
{
    char s[]="Ovo je";
    int a;
    a=razlika(s);
    printf("%d", a);
    return 0;
}
