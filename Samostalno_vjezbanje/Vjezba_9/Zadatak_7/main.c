#include <stdio.h>
#include <stdlib.h>

int JeLiPalindrom (const char *Str){
    char* kraj=Str;
    while (*kraj!='\0'){
        kraj++;
    }
    kraj--;
    while (Str<kraj){
        if (*Str==' ' || *Str=='.' || *Str=='!'){
            while (*Str==' ' || *Str=='.' || *Str=='!'){
                Str++;
            }
        }
        if (*kraj==' ' || *kraj=='.' || *kraj=='!'){
            while (*kraj==' ' || *kraj=='.' || *kraj=='!'){
                kraj--;
            }
        }
        if (*Str!=*kraj && (*Str+32!=*kraj && *Str-32!=*kraj)){
            return 0;
        }
        Str++;
        kraj--;
    }
    if (Str==kraj){
        return 1;
    }
    return 3;
}

int main()
{
    printf ("%d\n", JeLiPalindrom("Kapak")); //1
    printf ("%d\n", JeLiPalindrom("k a p a k")); //1
    printf ("%d\n", JeLiPalindrom("ka p a ak")); //0
    printf ("%d\n", JeLiPalindrom("Ana voli... Milovana")); //1
    return 0;
}
