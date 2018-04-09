#include <stdio.h>
#include <stdlib.h>

int obrni(int broj){
    int obrnut=0;
    while (broj!=0){
            obrnut*=10;
        obrnut+=broj%10;
        broj/=10;
    }
    return obrnut;
}

void ObrniCifre(int* niz, int vel){
    int i=0;
    int* pomocni=niz;
    while(i<vel){
        *niz=obrni(*niz);
        niz++;
        i++;
    }
    niz=pomocni;
}

int main()
{
    int niz[100];
    int vel=0;
    printf("Unesite brojeve (-1 za kraj): \n");
    int i=0;
    int broj;
    for (i=0; i<100; i++){
        scanf("%d", &broj);
        if (broj==-1) break;
        niz[i]=broj;
        vel++;
    }
    ObrniCifre(niz, vel);
    for (i=0; i<vel; i++){
        printf("%d\n", niz[i]);
    }
    return 0;
}
