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

char* whitespace(char* s){
    char* s2=s;
    int duzina=0;
    int broj_rijeci=1;
    char* pomocni=s;
    char* pomocni1=s;
    while (*pomocni!='\0'){
        if (*pomocni==' '){
            broj_rijeci++;
        }
        pomocni++;
    }
    int n=0;
    while (*s!='\0'){
            duzina=0;
            while (*s!=' '){
                s++;
            }
            s++;
            if (*s==' '){
            char* s1=s;
            while (*s1==' '){
                s1++;
                duzina++;
            }
    while (*(s+duzina)!='\0'){
        *s=*(s+duzina);
        s++;
    }
    if (*s1!='\0'){
        s=s1;
    }
    if (*(s+duzina)=='\0'){
        *s='\0';
    }}
    }
    return s2;
}

int main() {
	char tekst[100];
	printf("Unesite tekst: ");
      unesi(tekst, 100);
    whitespace(tekst);
	printf("Nakon zamjene: %s", tekst);
	return 0;
}
