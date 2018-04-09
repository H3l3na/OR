#include <stdio.h>
#include <stdlib.h>

void unesi(char niz[], int velicina) {
char znak = getchar();
if (znak == '\n') znak = getchar();
int i = 0;
while (i < velicina && znak != '\n') {
niz[i] = znak;
i++;
znak = getchar();
}
niz[i] = '\0';
}

void ubaci(char* s, int broj){
    char niz[4];
    int obrnut=0;
    while (broj!=0){
        obrnut*=10;
        obrnut+=broj%10;
        broj/=10;
    }
    int i=0;
    int duzina=0;
    while (obrnut!=0){
        niz[i]=obrnut%10+'0';
        obrnut/=10;
        duzina++;
        i++;
    }
   // niz[i]='32';
    i=0;
    char* pok=&niz[0];
    char* poc=s;
    while (*s!='\0'){
        if (*s==' '){
            s++;
            char* kraj=s;
            while (*kraj!='\0'){
                kraj++;
            }
            while (kraj>s){
                *(duzina+kraj+1)=*kraj;
                kraj--;
            }
            while (*pok!='\0'){
                *kraj=*pok;
                kraj++;
                pok++;
            }
            kraj=s+duzina,
            *kraj=' ';
        //*kraj=' ';
           pok=&niz[0];
            //*(s+duzina)='\0';
        }
            s++;
    }
}
int main()
{
    printf("Unesite neki tekst: \n");
    char tekst[100];
    unesi(tekst, 100);
   // int broj;
   // printf("\nUnesite broj koji zelite unijeti: ");
    //scanf("%d", &broj);
    ubaci(tekst, 123);
    printf("%s", tekst);
    return 0;
}
