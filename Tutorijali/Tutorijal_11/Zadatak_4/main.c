#include <stdio.h>
#include <stdlib.h>

struct Vrijeme {
		int sati;
		int minute;
		int sekunde;
	};

struct Vrijeme unos_vremena(){
    struct Vrijeme v;
    printf("\nUnesite vrijeme: ");
    scanf("%d %d %d", &v.sati, &v.minute, &v.sekunde);
    return v;
};

int proteklo(struct Vrijeme v1, struct Vrijeme v2){
    int sek;
    sek=abs(v1.sekunde-v2.sekunde);
    return sek;
}

int main()
{
    struct Vrijeme v1, v2;
    printf("Unesite prvo vrijeme: ");
    v1=unos_vremena();
    printf("\nUnesite drugo vrijeme: ");
    v2=unos_vremena();
    int protekle_sekunde;
    protekle_sekunde=proteklo(v1, v2);
    printf("\nIzmedju ova 2 vremena proteklo je %d sekundi", protekle_sekunde);
    return 0;
}
