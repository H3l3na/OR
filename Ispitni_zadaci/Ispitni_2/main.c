#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Program koji izbacuje najduzu rijec. Tacan!

char* izbaci(char* s){
    int brojac=0;
    int i=0;
    int max=0, indeks;
    char* pom=s;
    while (*(s+i)!='\0'){
            brojac=0;
            while ((*(s+i)>='a' && *(s+i)<='z') || (*(s+i)>='A' && *(s+i)<='Z')){
            brojac++;
            i++;}
            if (brojac>max){
                max=brojac;
                indeks=i-max;
            }

    if (*(s+i)!='\0'){i++;}
    }
    while (*(s+indeks+max+1)!='\0'){
        *(s+indeks)=*(s+indeks+max+1);
        s++;
    }
    *(s+indeks)='\0';
    return pom;
}



int main()
{
    char s[]="we are absolutely making cake";
    char* s1=izbaci(s);
    printf("%s", s1);
    return 0;
}
