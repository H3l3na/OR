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

struct Vrijeme proteklo(struct Vrijeme v1, struct Vrijeme v2){
    struct Vrijeme v;
    v.sati=abs(v1.sati-v2.sati);
    v.minute=abs(v1.minute-v2.minute);
    v.sekunde=abs(v1.sekunde-v2.sekunde);
    return v;
}

int main()
{
    struct Vrijeme v1, v2;
    printf("Unesite prvo vrijeme: ");
    v1=unos_vremena();
    printf("\nUnesite drugo vrijeme: ");
    v2=unos_vremena();
    int protekle_sekunde, protekli_sati, protekle_minute;
    protekli_sati=proteklo(v1, v2).sati;
    protekle_sekunde=proteklo(v1, v2).sekunde;
    protekle_minute=proteklo(v1, v2).minute;
    printf("\nIzmedju ova 2 vremena proteklo je %d sati, %d minuta i %d sekundi", protekli_sati, protekle_minute, protekle_sekunde);
    return 0;
}
