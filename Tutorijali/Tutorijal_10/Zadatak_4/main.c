#include <stdio.h>
#include <stdlib.h>
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

void izbaci_rijec(char* s, int n){
    int broj_rijeci=1;
    int duzina_rijeci=0;
    while(*s!='\0'){
            duzina_rijeci=0;
        if (*s==' '){
            broj_rijeci++;
        }
        if (broj_rijeci==n){
            if (n!=1){
            s++;}
            char* s1=s;
            while (*s1!=' ' && *s1!='\0'){
                duzina_rijeci++;
                s1++;
            }
            duzina_rijeci++;
            while (*(s+duzina_rijeci)!='\0'){
                *s=*(s+duzina_rijeci);
                s++;
            }
            *s='\0';
        }
        s++;
    }
}

int main() {
	char tekst[100];
	printf("Unesite tekst: ");
      unesi(tekst, 100);
    printf("\nKoju po redu rijec zelite izbaciti?: ");
    int n;
    scanf("%d", &n);
    izbaci_rijec(tekst, n);
	printf("Nakon izbacivanja: %s", tekst);
	return 0;
}

