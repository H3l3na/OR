#include <stdio.h>
#include <stdlib.h>

char *ZamijeniTekst (char *Str, const char *sta, const char *sa_cim, int cs){
    //Provjera da li se rijec nalazi u tekstu:
    char* pom=Str;
    char* pom1=sta;
    int flag=0;
    while (*pom!='\0'){
        if (*pom==*pom1){
            while (*pom==*pom1){
                pom++;
                pom1++;
            }
            if (*pom1=='\0'){
                flag=1;
            }
        }
    }
    //Code that gets executed if word is found in string
    int duzina_rijeci=0;
    char* p=sta;
    while (*p!='\0'){
        p++;
        duzina_rijeci++;
    }
    char* Str2=Str;
    char* poc=Str2;
    if (flag==1){
        while (*Str2!='\0'){
            if (*Str2==*sta){
                while (*Str2==*sta){
                    *Str2=*sa_cim;
                    Str2++;
                    sta++;
                    sa_cim++;
                }
            }
            *Str2='\0';
        }
    }
    Str=poc;
    return Str;
}


int main()
{
    char tekst[100] = " Zeko pije caj. Pije caj mali zeko!";
    ZamijeniTekst (tekst, "caj", "mlijeko", 0); //cs = 0
    printf ("'%s'", tekst);
    return 0;
}
