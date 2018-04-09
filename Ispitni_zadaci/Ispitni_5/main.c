#include <stdio.h>
#include <stdlib.h>
//include <string.h>

char maxslovo(char* s){
    int brojac[30]={0};
    while (*s!='\0'){
        if (*s>='a' && *s<='z'){
            brojac[*s-'a']++;
        }
        if (*s>='A' && *s<='Z'){
            brojac[*s-'A']++;
        }
        s++;
    }
    int max=0, maxi=0;
    max=brojac[0];
    int i=0;
    for (i=0; i<30; i++){
        if (brojac[i]>max){
            max=brojac[i];
            maxi=i;
        }
    }
    char slovo;
    slovo=maxi+'A';
}

int main()
{
    char s[]="Ovo je primjer neke recenice";
    char c=maxslovo(s);
    printf("%c", c);
    return 0;
}
