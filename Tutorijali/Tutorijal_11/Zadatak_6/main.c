#include <stdio.h>
#include <stdlib.h>

struct Osoba {
		char ime[15];
		char prezime[20];
		int telefon;
	};

struct Osoba unos_osobe(){
    struct Osoba person;
    printf("\nUnesite ime: ");
    char znak = getchar();
	if (znak == '\n') znak=getchar();
	int i = 0;
	while (i < 15-1 && znak != '\n') {
		person.ime[i] = znak;
		i++;
		znak = getchar();
	}
	person.ime[i]='\0';

	printf("\nUnesite prezime: ");
	char znak1 = getchar();
	if (znak1 == '\n') znak1=getchar();
	int j = 0;
	while (j < 20-1 && znak1 != '\n') {
		person.prezime[j] = znak1;
		j++;
		znak1= getchar();
	}
	person.prezime[j]='\0';
	return person;
};

void ispis_osobe(struct Osoba imenik[100], int br){
    int i=0;
    for (i=0; i<br; i++){
        int j=0;
        while (imenik[i].ime[j]!='\0'){
            printf("%c", imenik[i].ime[j]);
            j++;
        }
        printf(" ");
        int k=0;
        while (imenik[i].prezime[k]!='\0'){
            printf("%c", imenik[i].prezime[k]);
            k++;
        }
        printf("\n");
    }

}

int main()
{
    struct Osoba imenik[100];
    struct Osoba person;
    int unos;
    int brojac=0;
    printf("\nPritisnite 1 za unos, 2 za ispis, 0 za izlaz: ");
    scanf("%d", unos);
    int i=0;
    for (i=0; i<100; i++){
    if (unos==1){
        person=unos_osobe();
        brojac++;
    }else if (unos==2){
        ispis_osobe(imenik, brojac);
    }else if (unos==0){
        break;
    }}
    return 0;
}
