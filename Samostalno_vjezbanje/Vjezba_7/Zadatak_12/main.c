#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int NZD(a, b){
    int niz_a[100];
    int niz_b[100];
    int i=0;
    int brojac_a=0;
    int brojac_b=0;
    for (i=2; i<a; i++){
        if (a%i==0 && i>=2){
            niz_a[i-2]=i;
            brojac_a++;
        }
    }
    for (i=0; i<b; i++){
        if (b%i==0 && i>=2){
            niz_b[i-2]=i;
            brojac_b++;
        }
    }
    int max;
    int j=0;
    max=niz_a[0];
    for (i=0; i<brojac_a; i++){
        for (j=0; j<brojac_b; j++){
            if (niz_a[i]==niz_b[j] && niz_a[i]>max){
                max=niz_a[i];
            }
        }
    }
    return max;
}


int main()
{
    printf("Unesite brojeve a i b: \n");
    int a, b;
    scanf("%d %d", &a, &b);
    int br;
    br=NZD(a, b);
    printf("\nNajveci zajednicki djelilac brojeva %d i %d je %d", a, b, br);
    return 0;
}
