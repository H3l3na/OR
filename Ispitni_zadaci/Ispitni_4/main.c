#include <stdio.h>
#include <stdlib.h>

char slovo(char* s){
    char s1;
    int max=0;
    int broj=0;
    int i=0;
    while (*s!='\0'){
        broj=0;
        while (*s>='0' && *s<='9'){
            broj=broj*10+(*s-'0');
            s++;
        }
        if (broj>max){
            max=broj;
            s1=*s;
        }

       if (*s!='\0'){
        s++;
       }
    }
    return s1;
}

int main()
{
    char s[]="63a158b710c9d";
    char sl=slovo(s);
    printf("%c", sl);
    return 0;
}
