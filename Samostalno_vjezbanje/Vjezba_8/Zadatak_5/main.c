#include <stdio.h>
#include <stdlib.h>

int IzbaciPodniz (int *p1, int *p2,
 const int *q1, const int *q2){
     while (p1<p2){
        if (*p1==*q1){
            int* poc=q1;
            int* kraj=q2;
            int* pomocni=p1;
            while (*pomocni==*poc && poc!=kraj){
                poc++;
                pomocni++;
            }
            if (*poc==*kraj){
                return 1;
            }else {
                return 0;
            }
        }
        p1++;
     }
   //  return 0;
 }


int main()
{
    int niz1[10];
    int niz2[3];
    printf("\nUnesite prvi niz: ");
    int broj;
    int i=0; for (i=0; i<10; i++){
        scanf("%d", &broj);
        niz1[i]=broj;
    }
    printf("\nUnesite drugi niz: ");
    int broj2;
    for (i=0; i<3; i++){
        scanf("%d", &broj2);
        niz2[i]=broj2;
    }
    int br_izbacenih=IzbaciPodniz(niz1, niz1+10, niz2, niz2+10);
    if (br_izbacenih==1){
        printf("\nPronadjen podniz.");
    }else if (br_izbacenih==0){
        printf("\nNije pronadjen podniz.");
    }
    //printf("\nBroj izbacenih elemenata je: %d", br_izbacenih);
    return 0;
}
