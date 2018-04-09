#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct planina {
 char naziv[20];
 int visina_snijega[31];
 };

int main()
{
    struct planina planine[3];
    FILE* ulaz=fopen("skijanje.txt", "r");
    if (ulaz==NULL){
        printf("Greska pri otvaranju datoteke");
        exit(1);
    }
    int i=0;
    int j=0;
    while (fscanf(ulaz, "%20s", &planine[i].naziv)==1 && i<3){
        for (j=0; j<31; j++){
            if (fscanf(ulaz, "%d", &planine[i].visina_snijega[j])!=1){
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
    int broj_dana[3]={0};
    for(i=0; i<vel; i++){
        for (j=0; j<31; j++){
            if (planine[i].visina_snijega[j]>20){
                broj_dana[i]++;
            }
        }
    }
    for (i=0; i<vel; i++){
        printf("%d\n", broj_dana[i]);
    }
    FILE* izlaz=fopen("skijanje-dana.txt", "w");
    if (izlaz==NULL){
        printf("Greska pri otvaranju datoteke");
        exit(2);
    }
    int max=broj_dana[0];
    int maxi;
    for (i=0; i<vel; i++){
        if (broj_dana[i]>max){
            max=broj_dana[i];
            maxi=i;
        }
    }
    printf("%20s", planine[maxi].naziv);
    for (i=0; i<vel; i++){
        for(j=i+1; j<vel; j++){
            if (broj_dana[i]<broj_dana[j]){
                int k;
                k=broj_dana[i];
                broj_dana[i]=broj_dana[j];
                broj_dana[j]=k;
                struct planina temp=planine[i];
                planine[i]=planine[j];
                planine[j]=temp;
            }
        }
    }
    for (i=0; i<vel; i++){
        fprintf(izlaz, "%s %d\n", planine[i].naziv, broj_dana[i]);

    }
    fclose(izlaz);
    return 0;
}
