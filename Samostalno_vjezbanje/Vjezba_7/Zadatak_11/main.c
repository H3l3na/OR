#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Armstrong(int broj){
    int brojac=0;
    int br2=broj;
    int br3=broj;
    while (br2!=0){
        brojac++;
        br2/=10;
    }
    int niz[10];
    int i=0;
    int suma=0;
    int cifra;
    for(i=0; i<brojac; i++){
        suma+=pow((br3%10), brojac);
        br3/=10;
    }
    if (broj==suma){
        return 1;
    }else {
        return 0;
    }

}

int main()
{
    printf("Im an idiot!\n");
    printf("\nUnesite broj: ");
    int broj;
    scanf("%d", &broj);
    int value=Armstrong(broj);
    printf("\n%d", value);
    return 0;
}
