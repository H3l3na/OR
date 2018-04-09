#include <stdio.h>
#include <stdlib.h>

int stepen_dvojke(int broj){
    while (broj%2==0){
        broj/=2;
    }
    if (broj==1){
        return 1;
    }else {
        return 0;
    }
}

int main()
{
    printf("Unesite broj: \n");
    int broj;
    scanf("%d", &broj);
    int value;
    value=stepen_dvojke(broj);
    printf("\n%d", value);
    return 0;
}
