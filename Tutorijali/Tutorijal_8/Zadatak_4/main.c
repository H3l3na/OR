#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("\nUnesite niz brojeva (-1 za kraj): ");
    int niz[100];
    int i=0;
    int broj;
    int vel, indeks;
    for (i=0; i<100; i++){
        scanf("%d", &broj);
    if (broj==-1){
        break;
    }
        niz[i]=broj;
        vel=i+1;
    }
    int max;
    max=niz[0];
    int drugi;
    for (i=0; i<vel; i++){
        if (niz[i]>max){
            max=niz[i];
        }
    }
    drugi=niz[0];
    for (i=0; i<vel; i++){
        if (niz[i]>drugi && niz[i]<max){
            drugi=niz[i];
            indeks=i;
        }
    }
    printf("\nDrugi clan po velicini je: %d", drugi);
    printf("\nIndeks drugoga clana po velicini je: %d", indeks);
    return 0;
}
