#include <stdio.h>
#include <stdlib.h>

char* Kapitaliziraj(char* s){
    char* s1=s;
    while (*s!='\0'){
        if (*s==' '){
            s++;
            if (*s!=' ' && *s>=97 && *s<=122){
                *s-=32;
            }
        }
        s++;
    }
    return s1;
}

int main()
{
    char rijec[] = " Danas je divan Dan u sarajevu!";
//ispisuje „ Danas Je Divan Dan U Sarajevu!“
printf ("%s", Kapitaliziraj(rijec));
    return 0;
}
