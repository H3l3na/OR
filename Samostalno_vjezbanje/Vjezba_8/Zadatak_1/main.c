#include <stdio.h>
#include <stdlib.h>

void Prekopiraj (const int *izvor, int *odrediste, int n){
    int i=0;
    int* pomocni=odrediste;
    for (i=0; i<n; i++){
        *odrediste=*izvor;
        izvor++;
        odrediste++;
    }
    odrediste=pomocni;
}


int main()
{
    printf("Hello. \n");
    int niz[100];
    int vel=0;
    int i=0;
    printf("\nEnter some numbers fam (-1 for end): ");
    int broj;
    for (i=0; i<100; i++){
            scanf("%d", &broj);
            if (broj==-1){
                break;
            }
            niz[i]=broj;
            vel++;
    }
    int* izvor=niz;
    int niz2[100];
    int* odrediste=niz2;
    Prekopiraj(niz, niz2, vel);
    int j=0;
    while (j<vel){
        printf("%d\n", *odrediste);
        odrediste++;
        j++;
    }
    return 0;
}
