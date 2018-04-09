#include <stdio.h>
#include <stdlib.h>

int Dec2Bin(int decimalni){
    long int binarni=0;
    int remainder=1;
    int i=1;
    int vel=0;
    while (decimalni!=0){ //ovo treba promijeniti
        remainder=decimalni%2;
        decimalni/=2;
        binarni+=remainder*i;
        i*=10;
    }

    return binarni;
}

int main()
{
    printf("Unesite broj: \n");
    int broj;
    scanf("%d", &broj);
    long int binarni;
    binarni=Dec2Bin(broj);
    printf("\nBinarni zapis broja %d je: %d", broj, binarni);
    return 0;
}
