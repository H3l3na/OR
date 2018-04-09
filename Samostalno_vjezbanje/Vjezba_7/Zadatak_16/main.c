#include <stdio.h>
#include <stdlib.h>

int PotpunKvadrat(int broj){
    int i=1;
    for (i=1; i<broj; i++){
        if (i*i==broj){
            return 1;
        }
    }
    return 0;
}

int main()
{
    printf("Unesite broj: \n");
    int broj;
    scanf("%d", &broj);
    int d=PotpunKvadrat(broj);
    if (d==1){
        printf("\nBroj jeste potpun kvadrat.");
    }else if(d==0){
        printf("\nBroj nije potpun kvadrat.");
    }
    return 0;
}
