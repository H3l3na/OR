#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct kupaliste {
 char naziv[20];
 float temp_mora[30];
 };

int main()
{
    struct kupaliste kupalista[4];
    FILE* ulaz=fopen("kupanje.txt", "r");
    if (ulaz==NULL){
        printf("Greska pri otvaranju datoteke");
        exit(1);
    }
    int i=0, j=0;
    while (fscanf(ulaz, "%20s", &kupalista[i].naziv)==1 && i<4){
        for (j=0; j<30; j++){
            if (fscanf(ulaz, "%f", &kupalista[i].temp_mora[j])!=1){
                break;
            }
        }
            fscanf(ulaz, "\n");
            if (feof(ulaz)){
                break;
            }

        i++;
    }
    fclose(ulaz);
    int vel=i+1;
    FILE* izlaz=fopen("kupanje-dana.txt", "w");
    if (izlaz==NULL){
        printf("Greska pri otvaranju datoteke");
        exit(2);
    }
    int broj_dana[4]={0};
    for (i=0; i<vel; i++){
        for (j=0; j<30; j++){
        if (kupalista[i].temp_mora[j]>20){
            broj_dana[i]++;
        }
    }
    }
    int max=broj_dana[0];
    int maxi;
    for (i=0; i<vel; i++){
        if(broj_dana[i]>max){
            max=broj_dana[i];
            maxi=i;
        }
    }
    for (i=0; i<vel; i++){
        for (j=i+1; j<vel; j++){
            if (broj_dana[i]<broj_dana[j]){
                int k=broj_dana[j];
                broj_dana[j]=broj_dana[i];
                broj_dana[i]=k;
                struct kupaliste temp=kupalista[i];
                kupalista[i]=kupalista[j];
                kupalista[j]=temp;
            }
        }
    }
    for (i=0; i<vel; i++){
        fprintf(izlaz, "%s %d\n", kupalista[i].naziv, broj_dana[i]);
    }
    printf("%s", kupalista[maxi].naziv);
    fclose(izlaz);
    return 0;
}
