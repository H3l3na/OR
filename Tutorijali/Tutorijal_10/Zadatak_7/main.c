#include <stdio.h>
void unesi(char niz[], int velicina);

void unesi(char niz[], int velicina) {
char znak = getchar();
if (znak == '\n') znak = getchar();
int i = 0;
while (i < velicina && znak != '\n') {
niz[i] = znak;
i++;
znak = getchar();
}
niz[i] = '\0';
}

char* tritacke(char* s){
    int broj_rijeci=1;
    char* pomocni=s;
    char* pomocni1=s;
    while(*pomocni!='\0'){
        if (*pomocni==' '){
            broj_rijeci++;
        }
        pomocni++;
    }
    int n=0;
    int i=0;
    int duzina_rijeci=0;
    char* s3=s;
    while (*s!='\0'){
        i=0;
        duzina_rijeci=0;
        char* s1=s;
        char* s2=s;
        while (*s1!=' '){
            s1++;
            duzina_rijeci++;
        }
        s1++;

        if (duzina_rijeci>=10){
                duzina_rijeci-=3;
                s+=3;
           while (*(s+duzina_rijeci)!='\0'){
                *s=*(s+duzina_rijeci);
                s++;
           }
             if (*s1!='\0'){
            s=s1;
        }else{
           s--;
           *s='.';
           s++;
           *s='\0';}
        }s++;
    }
    return s3;
}

int main() {
	char tekst[100];
	printf("Unesite tekst: ");
      unesi(tekst, 100);
    tritacke(tekst);
	printf("Nakon zamjene: %s", tekst);
	return 0;
}
