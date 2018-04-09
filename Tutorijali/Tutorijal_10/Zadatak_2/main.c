#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

void zamijeni_broj(char* s, char* niz[]) {
   	 int duzina;
   	 int i=0;
   	 int j=0, k=0;
   	 int flag=0;
   	 char* niz1[]={"1", "2", "3", "4", "5", "6", "7", "8", "9"};
   	 while (*s != '\0') {
        duzina=0;
        j=0;
   		 if (*s == niz1[i][0]) {
   		     duzina=4;
   			 char* kraj = s;
   			 while (*kraj != '\0') kraj++;
   			 while (kraj > s) {
   				 *(kraj+duzina) = *kraj;
   				 kraj--;
   			 }
   			 while (niz[i][j]!='\0'){
   			 *s=niz[i][j];
   			 s++;
   			 j++;
   			 }
   		 }
   		 s++;
   		 i++;
   	 }
}
int main() {
	char tekst[100];
	char* niz[]={"jedan", "dva", "tri", "cetiri", "pet", "sest", "sedam", "osam", "devet"};
	printf("Unesite tekst: ");
      unesi(tekst, 100);
	zamijeni_broj(&tekst, niz);
	printf("Nakon zamjene: %s", tekst);
	return 0;
}

