#include <stdio.h>
#include <stdlib.h>

void Nadovezi (int *p1, const int *q1, const int *q2){
    while(q1<q2){
        *p1=*q1;
        p1++;
        q1++;
    }
}

int main()
{
    int niz1[10];
    int* pok=niz1;
    int niz2[5];
    printf("Unesite prvi niz: \n");
    int i=0;
    int broj;
    for(i=0; i<10; i++){
        scanf("%d", &broj);
        niz1[i]=broj;
    }
    printf("\nUnesite drugi niz: \n");
    int broj2;
    for (i=0; i<5; i++){
        scanf("%d", &broj2);
        niz2[i]=broj2;
    }
    Nadovezi (niz1 + 2, niz2, niz2 + 5);
    printf("\nNovi niz sada glasi: \n");
    for (i=0; i<10; i++){
        printf("%d ", *pok);
        pok++;
    }
    return 0;
}
