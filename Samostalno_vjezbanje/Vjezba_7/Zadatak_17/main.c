#include <stdio.h>
#include <stdlib.h>

int Korijen(int broj){
    int i=1;
    int kvadrat;
    for (i=1; i<broj; i++){
        if (i*i==broj){
            kvadrat=i;
            return kvadrat;
        }
    }
    return 0;
}

int main()
{
    printf("Unesite broj: \n");
    int broj;
    scanf("%d", &broj);
    int vr=Korijen(broj);
    if (vr==0){
        printf("\nBroj %d nije potpun kvadrat!", broj);
    }else {
    printf("\nKorijen broja %d je: %d", broj, vr);}
    return 0;
}
