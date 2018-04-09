#include <stdio.h>
#include <stdlib.h>

int *MaxEl (int *p1, int *p2){
    int* max;
    int* max1;
    max1=p1;
    while (p1!=p2){
        if (*p1>*max1){
                *max1=*p1;

            max=max1;
        }
        p1++;
    }
    return max;
}



int main()
{
    printf("Unesite niz od 5 brojeva: \n");
    int niz[5];
    int i=0;
    int broj;
    for (i=0; i<5; i++){
        scanf("%d", &broj);
        niz[i]=broj;
    }
    int* vr=MaxEl(niz, niz+5);
    printf("\nMaximalni element iznosi: %d", *vr);
    return 0;
}
