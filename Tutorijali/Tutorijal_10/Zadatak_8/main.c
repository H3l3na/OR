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

char* adresa(char* ime, char* prezime){
    int duzina_prezimena=0;
    char* pomocni2=prezime;
    while (*pomocni2!='\0'){
    pomocni2++;
    duzina_prezimena++;
   }
   char pomocni[20];
   int i=0;
   char* pom=prezime;
   while (*pom!='\0'){
    pomocni[i]=*pom;
    pom++;
    i++;
   }
   char* pomocni3=prezime;
   while (*ime!='\0'){
    *prezime=*ime;
    prezime++;
    ime++;
   }
   *prezime='.';
   char* kraj=prezime;
   while (*kraj!='\0'){
    kraj++;
   }
   while (kraj>prezime){
    *(kraj+duzina_prezimena)=*kraj;
    kraj--;
   }
   while (*prezime!='\0'){
        i=0;
    *prezime=pomocni[i];
    prezime++;
   i++;
   }
   *prezime='\0';
   prezime=pomocni3;
    return prezime;
}

int main() {
	char ime[20];
	char prezime[20];
	printf("Unesite ime: ");
      unesi(ime, 20);
    printf("\nUnesite prezime: ");
    unesi(prezime, 20);
	adresa(ime, prezime);
	printf("Nakon zamjene: %s", prezime);
	return 0;
}
