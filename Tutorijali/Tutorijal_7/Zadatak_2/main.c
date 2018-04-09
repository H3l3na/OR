#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float maxtemp(float p[8]){
    float max=p[0];
    int i=0;
    for (i=0; i<8; i++){
        if(p[i]>max){
            max=p[i];
        }
    }
    return max;
}

float prtemp(float p[8]){
    int i=0;
    float prt;
    float suma=0;
    for (i=0; i<8; i++){
        suma+=p[i];
    }
    prt=suma/8;
    return prt;
}


int main()
{
    float p[8];
    int i=0;
    float temp;
    printf("\nUnesite temperature: ");
    for (i=0; i<8; i++){
        scanf("%f", &temp);
        p[i]=temp;
    }
    float prt, maxt;
    maxt=maxtemp(p);
    prt=prtemp(p);
    printf("\nNajveca temperatura je: %.2f", maxt);
    printf("\nProsjecna temperatura je: %.2f", prt);
    return 0;
}
