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

void ukloni_komentare(char* s){
    char* s1=s;
    char *s2=s;
    while (*s!='\0'){
        while (*s1!=92 && *s1!=42 ){
                s1++;
        }
        if (*s1==92 && *(s1+1)==92){
                s=s1;
                while (*(s+3)!='\0'){
                    *s=*(s+2);
                    s++;
                }
        s++;
               *s='\0';
        }else if(*s1==92 && *(s1+1)==42){
            s=s1;
                while (*(s+3)!='\0'){
                    *s=*(s+2);
                    s++;
                }
        s++;
        *s='\0';
        }
        else if (*s1==42 && *(s1+1)==92){
            s=s1;
                while (*(s+3)!='\0'){
                    *s=*(s+2);
                    s++;
                }
        s++;
        *s='\0';
        }
        else {
            s++;
        }
       if (*(s1+2)!='\0'){
            s=s1+2;
        }
    }
}

int main() {
	char tekst[100];
	printf("Unesite tekst: ");
      unesi(tekst, 100);
    ukloni_komentare(tekst);
	printf("Nakon zamjene: %s", tekst);
	return 0;
}
