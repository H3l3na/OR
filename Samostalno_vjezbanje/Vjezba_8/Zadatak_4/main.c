#include <stdio.h>
#include <stdlib.h>

int Podniz (const int *p1, const int *p2,
 const int *q1, const int *q2){
     int pomocni;
     int i=0;
     while (p1+i<p2){
        if (*(p1+i)==*(q1+i)){
                pomocni=i;
                int j=i;
            while (*(p1+j)==*(q1+j)){
                j++;

            }
            if (q1+j==q2){
                return pomocni;
            }else {
                return -1;
            }
        }
        i++;
     }
 }


int main()
{
    int niz1[8];
    int niz2[4];
    printf("Unesite prvi niz: \n");
    int i=0;
    for (i=0; i<8; i++){
        scanf("%d", &niz1[i]);
    }
    printf("\nUnesite drugi niz: \n");
    for (i=0; i<4; i++){
        scanf("%d", &niz2[i]);
    }
    int k;
    k=Podniz(niz1, niz1+10, niz2, niz2+4);
    if (k==-1){
        printf("\nNije pronadjen podniz. \n");
    }else {
        printf("\nPodniz pronadjen na indeksu %d", k);
    }
    return 0;
}
