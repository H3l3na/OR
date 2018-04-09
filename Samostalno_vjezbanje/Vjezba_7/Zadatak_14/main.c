#include <stdio.h>
#include <stdlib.h>

int Bin2Dec(int broj){
    int decimalni=0;
    int cifra;
    int brojac=0;
    while (broj!=0){
            cifra=broj%10;
            brojac++;
            if (cifra!=0){
        decimalni+=pow(2, brojac-1);
        }else{
            decimalni+=0;
        }
        broj/=10;
    }
    return decimalni;
}

int main()
{
    printf("Unesite binarni broj: \n");
    int broj;
    scanf("%d", &broj);
    int decimalni;
    decimalni=Bin2Dec(broj);
    printf("\nDecimalni zapis broja %d je: %d", broj, decimalni);
    return 0;
}
