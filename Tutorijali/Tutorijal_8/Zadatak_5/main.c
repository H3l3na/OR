#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void zaokruzi(float niz[], int vel){
    int i=0;
    float *p=niz;
    while(p<niz+vel){
        *p*=10;
        *p=(int)*p;
        *p/=10;
        p++;
    }
}

int main()
{
    float niz[5]={1.2332,3.22312,1.233,2.433,5.345};
    zaokruzi(niz, 5);
    float* p=niz;
    printf("\nNiz sada glasi: \n");
    while(p<niz+5){
        printf("%.1f\n", *p);
        p++;
    }
    return 0;
}
