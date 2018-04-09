#include <stdio.h>
#include <stdlib.h>

void f(char* s, int broj){
    int duzina=0;
    int br=broj;
    while (br!=0){
        br/=10;
        duzina++;
    }
    int k=0;
    int j=0;
    char* s1;
    int izvrnut=0;
    while (broj!=0){
        izvrnut*=10;
        izvrnut+=broj%10;
        broj/=10;
    }
    int i=0;
    for (i=0; i<duzina; i++){
        *(s1+i)=izvrnut%10+'0';
        izvrnut/=10;
    }
    while (*s!='\0'){
        if (*s==' '){
            s++;
            while (k<duzina){
                *(s+duzina+k) = *(s+k);
                k++;
            }
            *(s+duzina+k)=' ';
            while (j<duzina){
                *s=*s1;
                j++;
                s++;
                s1++;
            }
        }
    }
}

int main()
{
    char s[]="whoa there buckaroo";
    int broj=123;
    f(s, broj);
    printf("%s", s);
    return 0;
}
