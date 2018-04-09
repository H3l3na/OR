#include <stdio.h>
void unesi(char niz[], int velicina);

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

char* rot_13(char* s){
    char* s1=s;
    while (*s!='\0'){
        if (*s-32>=65){
            if (*s+13>122){
                *s-=13;
            }else{
            *s+=13;
            }
        }else{
            if (*s+13>90){
                *s-=13;
            }else{
                *s+=13;
            }
        }
        s++;
    }
    return s1;
}

int main() {
	char tekst[100];
	printf("Unesite tekst: ");
      unesi(tekst, 100);
    rot_13(tekst);
	printf("Nakon zamjene: %s", tekst);
	return 0;
}

