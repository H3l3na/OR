#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct grad {
 char naziv[20];
 float temperatura[366];
 };

int main()
{
    struct grad gradovi[300];
    FILE* ulaz=fopen("temperature.txt", "r");
    if (ulaz==NULL){
        printf("Greska pri otvaranju datoteke.");
        exit(1);
    }
    int i=0;
    int k=0;
    int n=0;
    int j=0;
    while (fscanf(ulaz, "%20s", &gradovi[i].naziv)==1 && i<300){
        for (k=0; k<365; k++){
            if (fscanf(ulaz, "%f", &gradovi[i].temperatura[j])!=1){
                break;
            }
        }
            fscanf(ulaz, "\n");
            if (feof(ulaz)){
                break;
            }
            for (n=0; n<i; n++){
                if (strcmp(gradovi[i].naziv,gradovi[n].naziv)==0){
                    i--;
                }
            }

        i++;
    }
    fclose(ulaz);
    int vel=i;
    int max;
    int max_total=gradovi[0].temperatura[0];
    int indeks=0;
   for (i=0; i<vel; i++){
        max=gradovi[i].temperatura[0];
        for (j=0; j<365; j++){
            if (gradovi[i].temperatura[j]>max){
                max=gradovi[i].temperatura[j];
            }
        }
        if (max>max_total){
            max_total=max;
            indeks=i;
        }
    }
    printf("%s", gradovi[indeks].naziv);
    for (i=0; i<vel; i++){
        for (j=i+1; j<vel; j++){
            if (gradovi[i].temperatura[0]<gradovi[j].temperatura[0]){
                struct grad temp=gradovi[i];
                gradovi[i]=gradovi[j];
                gradovi[j]=temp;
            }
        }
    }
    //Naci grad sa najvecom prosjecnom temperaturom tokom citave godine
    int max_prosjek=0;
    int prosjek=0;
    int indeks_pr;
    for (i=0; i<vel; i++){
            prosjek=0;
        for (j=0; j<365; j++){
            prosjek+=gradovi[i].temperatura[j];
        }
        if (prosjek>max_prosjek){
            max_prosjek=prosjek;
            indeks_pr=i;
        }
    }
    printf("\n%s\n", gradovi[indeks_pr].naziv);
    FILE *izlaz=fopen("temperature-sortirano.txt", "w");
    if (izlaz==NULL){
        printf("Greska pri otvaranju datoteke");
        exit(2);
    }
    for (i=0; i<vel; i++){
        fprintf(izlaz, "%s %.2f\n", gradovi[i].naziv, gradovi[i].temperatura[0]);
    }
   // printf("%d", max_total);
   // printf("%s", gradovi[0].naziv);
   fclose(izlaz);
    return 0;
}
