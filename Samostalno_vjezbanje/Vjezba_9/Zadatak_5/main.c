#include <stdio.h>
#include <stdlib.h>

/*void IspisiUnazad (const char *Str){
    char* pom=Str;
    int vel=0;
    while (*pom!='\0'){
        vel++;
        pom++;
    }
    while(vel>0){
        printf("%c", *(Str+vel-1));
        vel--;
    }

}*/

void IspisiUnazad(const char* Str){    //Rekurzijom
    char* poc=Str;
    while (*Str!='\0'){
        Str++;
    }
    Str--;
    while (*poc!='\0'){
    printf("%c", *Str );
    poc++;
    Str--;
    }
}

int main()
{
    const char *str = "Osnove racunarstva - OR";
    IspisiUnazad(str);
    return 0;
}
