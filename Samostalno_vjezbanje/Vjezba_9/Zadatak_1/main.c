#include <stdio.h>
#include <stdlib.h>

char *PosljednjaRijec (char *s){
    int br_rijeci=1;
    char* s1=s;
    while (*s1!='\0'){
        if (*s1==' '){
            br_rijeci++;
        }
        s1++;
    }
    char* pok;
    int br_rijeci1=1;
    while (*s!='\0'){
        if (*s==' '){
            br_rijeci1++;
        }
        if (br_rijeci1==br_rijeci){
            s++;
            pok=s;
            return pok;
        }
        s++;
    }
}


int main()
{
    printf ("Posljednja rijec: %s\n", PosljednjaRijec("Danas je divan dan jelde!"));
    char* s=PosljednjaRijec("Danas je divan dan jelde");
    printf("%s", s);
    return 0;
}
