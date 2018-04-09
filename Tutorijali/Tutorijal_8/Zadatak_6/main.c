#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void sortiraj(float *niz, int vel){
    int i=0, j=0;
    int min;
    float temp;
    float *p=niz;
    float *p1=&niz[1];
    float *minn=p;
    float temp1;
    while (p<niz+vel){
        minn=p;
            while (p1<niz+vel){
                if (p1<minn){
                minn=p1;
                }
                p1++;
            }
            temp1=*p;
            p=minn;
            *minn=temp1;
            p++;
    }


    /*for (i=0; i<vel; i++){
        min=i;
        for (j=i+1; j<vel; j++){
            if (niz[j]<niz[min]){
                min=j;
            }
        }
        temp=niz[i];
        niz[i]=niz[min];
        niz[min]=temp;
    }*/

}
int main()
{
    float niz[5]={1.2, 1.1, 5.43, 3.23, 2.34};
    sortiraj(&niz, 5);
    int i=0;
    printf("Sortirani niz glasi: \n");
    for (i=0; i<5; i++){
        printf("%f\n", niz[i]);
    }
    return 0;
}
